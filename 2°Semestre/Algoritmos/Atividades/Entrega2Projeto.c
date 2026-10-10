#include <stdio.h>

int main() {
    /*int codigo_produto1, codigo_produto2, codigo_produto3, codigo_produto4, codigo_produto5;
    char nome_produto1[50], nome_produto2[50], nome_produto3[50], nome_produto4[50], nome_produto5[50];
    float preco_produto1, preco_produto2, preco_produto3, preco_produto4, preco_produto5;
    int quantidade_produto1, quantidade_produto2, quantidade_produto3, quantidade_produto4, quantidade_produto5;
    float valor_estoque_produto1, valor_estoque_produto2, valor_estoque_produto3, valor_estoque_produto4, valor_estoque_produto5;    
    float valor_total;*/

    //variavel de repetição
    int opcao = 0;
    int produto = 0;
    int i;
    int a;
    int b;

    // Variavel de array do cadastro de produto
    int codigo[10];
    char nome[10][50];
    float preco[10];
    int quantida[10];
    //Variavel para consutar produto
    int pro_codigo;
    int cli_codigo;

    float total = 0;



//Registro de Informacoes dos Produtos 
    printf("SISTEMA DE GERENCIAMENTO DE PRODUTOS\n");
    printf("\nFaca o cadastro dos seus produtos!\n");
//===============================================================================

//Menu do sistema de controle de estoque
    printf("========================================");
    printf("     SISTEMA DE CONTROLE DE ESTOQUE      ");
    printf("========================================");
    while (opcao != 5)
    {

    printf("Escolha umas das opcoes abaixo:\n");
    printf("1-Cadastro produtos\n");
    printf("2-Consutar produtos\n");
    printf("3-Verificar valor total do estoque\n");
    printf("5 Sair do programa\n");
    
    printf("Escolha umas das opções: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        while (produto < 10)
        {
            printf("Informe o codigo do Produto: ");
            scanf("%d",&codigo[produto]);
            
            printf("Digite o nome do segundo produto: ");
            scanf("%s", nome[produto]);

            printf("Digite o valor do preço: ");
            scanf("%f", &preco[produto]);

            printf("Digite a quantidade de produto: ");
            scanf("%d", &quantida[produto]);

            produto++;
        }
        
        break;
    case 2:
    //Aqui é basicamente para encontrar o produto, vou usar o for para encontra o codigo do produto
        printf("Digite o codigo do produto para encontralo: ");
        scanf("%d", &pro_codigo);

        for (i =0; i < 10; i++)
        {
            if (codigo[i] == pro_codigo)
            {
                printf("\nCOdigo do Produto encontrado\n");
                printf("Nome do produto: %s\n", nome[i]);
                printf("A quantidade do produto: %d\n", quantida[i]);
                printf("O preco do produto: %.2f\n", preco[i]); 
            }
            
           
        }
        break;
    case 3:
        // Aqui vou fazer o cliente escolher o codigo do produto para saber
        // a quantidade do estoque
        while (1)
        {

            printf("Digite o codigo 0 para sair\nDigite o codigo para saber a quantidade do estoque ");
            scanf("%d", &cli_codigo);

            if (cli_codigo == 0)
            {
                printf("Você saiu do programa\n");
                break;
            }
            for (a =0; a<10; a++)
            {
                if (codigo[a] == cli_codigo)
                {
                    if (quantida[a] == 0)
                    {
                        printf("ESTOQUE ESGOTADO\n");
                    }
                    else if (quantida[a] <= 5)
                    {
                        printf("ESTOQUE BAIXO\n");
                    }
                    else
                    {
                    printf("ESTOQUE NORMAL\n");
                    }
                    
                    
                }
                
            }
            
        }
        break;

    case 4:

        total = 0;

        for (b = 0; b < 10; b++)
        {
            total += preco[b] * quantida[b];
        }

        printf("O valor total eh:R$ %.2f\n", total);
        
        break;
    
    case 5:
        printf("Voce Saiu do Programa!\n");

        break;
    
    default:
        printf("\nOpção invalida!\n");
        break;
    }


    }
    



//Registro de Informacoes do Primeiro Produto 
    /*printf("\nCadastro do Primeiro Produto\n");
    printf("Informe o codigo do primeiro produto: ");
    scanf("%d" ,&codigo_produto1);
    printf("Informe o nome do primeiro produto: ");
    scanf("%s" ,nome_produto1);
    printf("Informe o preco do primeiro produto: ");
    scanf("%f" ,&preco_produto1);
    printf("Informe a quantidade em estoque do primeiro produto: ");
    scanf("%d" ,&quantidade_produto1);*/
//===============================================================================

//Registro de Informacoes do Segundo Produto
/*
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
*/ 
    return 0;
}