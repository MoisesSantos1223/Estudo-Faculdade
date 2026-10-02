#include <stdio.h>

int main() {
    int codigo_produto1, codigo_produto2, codigo_produto3, codigo_produto4, codigo_produto5;
    char nome_produto1[50], nome_produto2[50], nome_produto3[50], nome_produto4[50], nome_produto5[50];
    float preco_produto1, preco_produto2, preco_produto3, preco_produto4, preco_produto5;
    int quantidade_produto1, quantidade_produto2, quantidade_produto3, quantidade_produto4, quantidade_produto5;
    float valor_estoque_produto1, valor_estoque_produto2, valor_estoque_produto3, valor_estoque_produto4, valor_estoque_produto5;    
    float valor_total;

//Registro de Informacoes dos Produtos 
    printf("SISTEMA DE GERENCIAMENTO DE PRODUTOS\n");
    printf("\nFaca o cadastro dos seus produtos!\n");
//===============================================================================

//Registro de Informacoes do Primeiro Produto 
    printf("\nCadastro do Primeiro Produto\n");
    printf("Informe o codigo do primeiro produto: ");
    scanf("%d" ,&codigo_produto1);
    printf("Informe o nome do primeiro produto: ");
    scanf("%s" ,nome_produto1);
    printf("Informe o preco do primeiro produto: ");
    scanf("%f" ,&preco_produto1);
    printf("Informe a quantidade em estoque do primeiro produto: ");
    scanf("%d" ,&quantidade_produto1);
//===============================================================================

//Registro de Informacoes do Segundo Produto 
    printf("\nCadastro do Segundo Produto\n");
    printf("Informe o codigo do segundo produto: ");
    scanf("%d" ,&codigo_produto2);
    printf("Informe o nome do segundo produto: ");
    scanf("%s" ,nome_produto2);
    printf("Informe o preco do segundo produto: ");
    scanf("%f" ,&preco_produto2);
    printf("Informe a quantidade em estoque do segundo produto: ");
    scanf("%d" ,&quantidade_produto2);
//===============================================================================

//Registro de Informacoes do Terceiro Produto     
    printf("\nCadastro do Terceiro Produto\n");
    printf("Informe o codigo do terceiro produto: ");
    scanf("%d" ,&codigo_produto3);
    printf("Informe o nome do terceiro produto: ");
    scanf("%s" ,nome_produto3);
    printf("Informe o preco do terceiro produto: ");
    scanf("%f" ,&preco_produto3);
    printf("Informe a quantidade em estoque do terceiro produto: ");
    scanf("%d" ,&quantidade_produto3);
//===============================================================================

//Registro de Informacoes do Quarto Produto 
    printf("\nCadastro do Quarto Produto\n");
    printf("Informe o codigo do quarto produto: ");
    scanf("%d" ,&codigo_produto4);
    printf("Informe o nome do quarto produto: ");
    scanf("%s" ,nome_produto4);
    printf("Informe o preco do quarto produto: ");
    scanf("%f" ,&preco_produto4);
    printf("Informe a quantidade em estoque do quarto produto: ");
    scanf("%d" ,&quantidade_produto4);
//===============================================================================

//Registro de Informacoes do Quinto Produto 
    printf("\nCadastro do Quinto Produto\n");
    printf("Informe o codigo do quinto produto: ");
    scanf("%d" ,&codigo_produto5);
    printf("Informe o nome do quinto produto: ");
    scanf("%s" ,nome_produto5);
    printf("Informe o preco do quinto produto: ");
    scanf("%f" ,&preco_produto5);
    printf("Informe a quantidade em estoque do quinto produto: ");
    scanf("%d" ,&quantidade_produto5);
//===============================================================================

//Calculo de Valores dos Produtos em Estoque 
    valor_estoque_produto1 = preco_produto1 * quantidade_produto1;
    valor_estoque_produto2 = preco_produto2 * quantidade_produto2;
    valor_estoque_produto3 = preco_produto3 * quantidade_produto3;
    valor_estoque_produto4 = preco_produto4 * quantidade_produto4;
    valor_estoque_produto5 = preco_produto5 * quantidade_produto5;
//===============================================================================

//Calculo do Valor Total do Estoque 
    valor_total = valor_estoque_produto1 + valor_estoque_produto2 + valor_estoque_produto3 + valor_estoque_produto4 + valor_estoque_produto5;
//================================================================================================================================================

//Apresentacao dos Produtos e Resumo do Estoque
    printf("\nRESUMO DO ESTOQUE\n");
    printf("\nAqui estao as informacoes e valores dos produtos cadastrados: \n");
//===============================================================================

//Resumo das Informacoes e Estoque do Primeiro Produto 
    printf("\nPrimeiro Produto\n");
    printf("Codigo: %d\n" ,codigo_produto1);
    printf("Produto: %s\n" ,nome_produto1);
    printf("Preco: R$%.2f\n" ,preco_produto1);
    printf("Quantidade: %d\n" ,quantidade_produto1);
    printf("Valor em Estoque: R$%.2f\n" ,valor_estoque_produto1);
//===============================================================================

//Resumo das Informacoes e Estoque do Segundo Produto 
    printf("\nSegundo Produto\n");
    printf("Codigo: %d\n" ,codigo_produto2);
    printf("Produto: %s\n" ,nome_produto2);
    printf("Preco: R$%.2f\n" ,preco_produto2);
    printf("Quantidade: %d\n" ,quantidade_produto2);
    printf("Valor em Estoque: R$%.2f\n" ,valor_estoque_produto2);
//===============================================================================

//Resumo das Informacoes e Estoque do Terceiro Produto 
    printf("\nTerceiro Produto\n");
    printf("Codigo: %d\n" ,codigo_produto3);
    printf("Produto: %s\n" ,nome_produto3);
    printf("Preco: R$%.2f\n" ,preco_produto3);
    printf("Quantidade: %d\n" ,quantidade_produto3);
    printf("Valor em Estoque: R$%.2f\n" ,valor_estoque_produto3);
//===============================================================================

//Resumo das Informacoes e Estoque do Quarto Produto 
    printf("\nQuarto Produto\n");
    printf("Codigo: %d\n" ,codigo_produto4);
    printf("Produto: %s\n" ,nome_produto4);
    printf("Preco: R$%.2f\n" ,preco_produto4);
    printf("Quantidade: %d\n" ,quantidade_produto4);
    printf("Valor em Estoque: R$%.2f\n" ,valor_estoque_produto4);
//===============================================================================

//Resumo das Informacoes e Estoque do Quinto Produto 
    printf("\nQuinto Produto\n");
    printf("Codigo: %d\n" ,codigo_produto5);
    printf("Produto: %s\n" ,nome_produto5);
    printf("Preco: R$%.2f\n" ,preco_produto5);
    printf("Quantidade: %d\n" ,quantidade_produto5);
    printf("Valor em Estoque: R$%.2f\n" ,valor_estoque_produto5);
//===============================================================================

//Valor Final do Estoque
    printf("\nValor total do estoque: R$%.2f\n" ,valor_total);
//===============================================================================

    return 0;
}