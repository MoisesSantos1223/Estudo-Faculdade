#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
};

int localizarProduto(struct produto produtos[], int quantidade, int codigo);
void mostrarProduto(struct produto p);
void cadastrarProduto(struct produto **produtos, int *quantidade);
void listarProdutos(struct produto produtos[], int quantidade);
void consultarProduto(struct produto produtos[], int quantidade);
void alterarProduto(struct produto produtos[], int quantidade);
void excluirProduto(struct produto produtos[], int *quantidade);
void verificarEstoque(struct produto produtos[], int quantidade);
float calcularValorEstoque(struct produto produtos[], int quantidade);
void mostrarMaiorMenor(struct produto produtos[], int quantidade, int maior);
void ordenarProdutos(struct produto produtos[], int quantidade);
void salvarProdutos(struct produto produtos[], int quantidade);
void carregarProdutos(struct produto **produtos, int *quantidade);

int main(void) {
    struct produto *produtos = NULL; //Eu tenho que tirar uma duvida com chatgpt 
    int quantidade = 0;
    int opcao;

    carregarProdutos(&produtos, &quantidade);

    do {
        printf("\n========================================\n");
        printf("      SISTEMA DE CONTROLE DE ESTOQUE\n");
        printf("========================================\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Consultar produto\n");
        printf("4 - Alterar produto\n");
        printf("5 - Excluir produto\n");
        printf("6 - Verificar estoque\n");
        printf("7 - Calcular valor total do estoque\n");
        printf("8 - Mostrar produto de maior valor\n");
        printf("9 - Mostrar produto de menor valor\n");
        printf("10 - Ordenar produtos (Bubble Sort)\n");
        printf("11 - Salvar dados\n");
        printf("12 - Carregar dados\n");
        printf("13 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarProduto(&produtos, &quantidade); break;
            case 2: listarProdutos(produtos, quantidade); break;
            case 3: consultarProduto(produtos, quantidade); break;
            case 4: alterarProduto(produtos, quantidade); break;
            case 5: excluirProduto(produtos, &quantidade); break;
            case 6: verificarEstoque(produtos, quantidade); break;
            case 7:
                printf("Valor total do estoque: R$ %.2f\n",
                       calcularValorEstoque(produtos, quantidade));
                break;
            case 8: mostrarMaiorMenor(produtos, quantidade, 1); break;
            case 9: mostrarMaiorMenor(produtos, quantidade, 0); break;
            case 10: ordenarProdutos(produtos, quantidade); break;
            case 11: salvarProdutos(produtos, quantidade); break;
            case 12: carregarProdutos(&produtos, &quantidade); break;
            case 13: printf("Sistema encerrado.\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 13);

    free(produtos);
    return 0;
}

int localizarProduto(struct produto produtos[], int quantidade, int codigo) {
    int i;
    for (i = 0; i < quantidade; i++) {
        if (produtos[i].codigo == codigo)
            return i;
    }
    return -1;
}

void mostrarProduto(struct produto p) {
    printf("Codigo: %d\n", p.codigo);
    printf("Nome: %s\n", p.nome);
    printf("Preco: R$ %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);
    printf("Valor em estoque: R$ %.2f\n", p.preco * p.quantidade);
}

void cadastrarProduto(struct produto **produtos, int *quantidade) {
    struct produto novo;
    struct produto *auxiliar;

    printf("Codigo do produto: ");
    scanf("%d", &novo.codigo);
    if (localizarProduto(*produtos, *quantidade, novo.codigo) != -1) {
        printf("Ja existe um produto com esse codigo.\n");
        return;
    }

    printf("Nome do produto: ");
    scanf(" %49[^\n]", novo.nome);
    printf("Preco: ");
    scanf("%f", &novo.preco);
    printf("Quantidade: ");
    scanf("%d", &novo.quantidade);

    if (novo.preco < 0 || novo.quantidade < 0) {
        printf("Preco e quantidade nao podem ser negativos.\n");
        return;
    }

    auxiliar = realloc(*produtos, (*quantidade + 1) * sizeof(struct produto));
    if (auxiliar == NULL) {
        printf("Nao foi possivel reservar memoria.\n");
        return;
    }

    *produtos = auxiliar;
    (*produtos)[*quantidade] = novo;
    (*quantidade)++;
    printf("Produto cadastrado com sucesso!\n");
}

void listarProdutos(struct produto produtos[], int quantidade) {
    int i;
    if (quantidade == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    for (i = 0; i < quantidade; i++) {
        printf("\n--- Produto %d ---\n", i + 1);
        mostrarProduto(produtos[i]);
    }
}

void consultarProduto(struct produto produtos[], int quantidade) {
    int codigo, posicao;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    posicao = localizarProduto(produtos, quantidade, codigo);
    if (posicao == -1)
        printf("Produto nao encontrado.\n");
    else
        mostrarProduto(produtos[posicao]);
}

void alterarProduto(struct produto produtos[], int quantidade) {
    int codigo, posicao;
    struct produto original;
    if (quantidade == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    printf("Codigo do produto que deseja alterar: ");
    scanf("%d", &codigo);
    posicao = localizarProduto(produtos, quantidade, codigo);
    if (posicao == -1) {
        printf("Produto nao encontrado.\n");
        return;
    }

    original = produtos[posicao];
    printf("Novo nome: ");
    scanf(" %49[^\n]", produtos[posicao].nome);
    printf("Novo preco: ");
    scanf("%f", &produtos[posicao].preco);
    printf("Nova quantidade: ");
    scanf("%d", &produtos[posicao].quantidade);
    if (produtos[posicao].preco < 0 || produtos[posicao].quantidade < 0) {
        produtos[posicao] = original;
        printf("Preco e quantidade nao podem ser negativos. Alteracao cancelada.\n");
    } else {
        printf("Produto alterado com sucesso!\n");
    }
}

void excluirProduto(struct produto produtos[], int *quantidade) {
    int codigo, posicao, i;
    printf("Codigo do produto que deseja excluir: ");
    scanf("%d", &codigo);
    posicao = localizarProduto(produtos, *quantidade, codigo);
    if (posicao == -1) {
        printf("Produto nao encontrado.\n");
        return;
    }
    for (i = posicao; i < *quantidade - 1; i++)
        produtos[i] = produtos[i + 1];
    (*quantidade)--;
    printf("Produto excluido com sucesso!\n");
}

void verificarEstoque(struct produto produtos[], int quantidade) {
    int i;
    if (quantidade == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    for (i = 0; i < quantidade; i++) {
        printf("%s: ", produtos[i].nome);
        if (produtos[i].quantidade == 0)
            printf("ESTOQUE ESGOTADO\n");
        else if (produtos[i].quantidade <= 5)
            printf("ESTOQUE BAIXO\n");
        else
            printf("ESTOQUE NORMAL\n");
    }
}

float calcularValorEstoque(struct produto produtos[], int quantidade) {
    float total = 0;
    int i;
    for (i = 0; i < quantidade; i++)
        total += produtos[i].preco * produtos[i].quantidade;
    return total;
}

void mostrarMaiorMenor(struct produto produtos[], int quantidade, int maior) {
    int i, posicao = 0;
    if (quantidade == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    for (i = 1; i < quantidade; i++) {
        float valorAtual = produtos[i].preco * produtos[i].quantidade;
        float valorEscolhido = produtos[posicao].preco * produtos[posicao].quantidade;
        if ((maior && valorAtual > valorEscolhido) ||
            (!maior && valorAtual < valorEscolhido))
            posicao = i;
    }
    printf("Produto de %s valor em estoque:\n", maior ? "maior" : "menor");
    mostrarProduto(produtos[posicao]);
}

void ordenarProdutos(struct produto produtos[], int quantidade) {
    int criterio, i, j, trocar;
    struct produto auxiliar;
    if (quantidade < 2) {
        printf("Nao ha produtos suficientes para ordenar.\n");
        return;
    }

    printf("Ordenar por: 1-Codigo  2-Nome  3-Preco  4-Quantidade: ");
    scanf("%d", &criterio);
    if (criterio < 1 || criterio > 4) {
        printf("Opcao de ordenacao invalida.\n");
        return;
    }

    /* Bubble Sort: compara produtos vizinhos e troca quando necessario. */
    for (i = 0; i < quantidade - 1; i++) {
        for (j = 0; j < quantidade - i - 1; j++) {
            trocar = 0;
            if (criterio == 1 && produtos[j].codigo > produtos[j + 1].codigo)
                trocar = 1;
            else if (criterio == 2 && strcmp(produtos[j].nome, produtos[j + 1].nome) > 0)
                trocar = 1;
            else if (criterio == 3 && produtos[j].preco > produtos[j + 1].preco)
                trocar = 1;
            else if (criterio == 4 && produtos[j].quantidade > produtos[j + 1].quantidade)
                trocar = 1;

            if (trocar) {
                auxiliar = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = auxiliar;
            }
        }
    }
    printf("Produtos ordenados!\n");
    listarProdutos(produtos, quantidade);
}

void salvarProdutos(struct produto produtos[], int quantidade) {
    FILE *arquivo = fopen("estoque.txt", "w");
    int i;
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para gravacao.\n");
        return;
    }
    for (i = 0; i < quantidade; i++)
        fprintf(arquivo, "%d;%s;%.2f;%d\n", produtos[i].codigo,
                produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    fclose(arquivo);
    printf("Dados salvos em estoque.txt.\n");
}

void carregarProdutos(struct produto **produtos, int *quantidade) {
    FILE *arquivo = fopen("estoque.txt", "r");
    struct produto novo, *auxiliar;
    if (arquivo == NULL) {
        printf("Arquivo estoque.txt ainda nao existe.\n");
        return;
    }

    free(*produtos);
    *produtos = NULL;
    *quantidade = 0;

    while (fscanf(arquivo, "%d;%49[^;];%f;%d", &novo.codigo,
                  novo.nome, &novo.preco, &novo.quantidade) == 4) {
        auxiliar = realloc(*produtos, (*quantidade + 1) * sizeof(struct produto));
        if (auxiliar == NULL) {
            printf("Memoria insuficiente para carregar todos os produtos.\n");
            break;
        }
        *produtos = auxiliar;
        (*produtos)[*quantidade] = novo;
        (*quantidade)++;
    }
    fclose(arquivo);
    printf("%d produto(s) carregado(s).\n", *quantidade);
}
