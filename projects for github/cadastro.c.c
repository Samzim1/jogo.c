#include <stdio.h>
#include <locale.h>
#include <string.h>

int opcao = 0;

void TelaLogin()
{

    char login[16] = "";
    char login1[16];
    char senha[16] = "";
    char senha1[16];

    printf("\n==cadastro==\n"); // aqui é onde sera feito o cadastro.

    printf(" Faça seu cadastro: ");
    scanf("%s", login);

    printf("Digite a Senha: ");
    scanf("%s", senha);

    printf("cadastro finalizado.\n");


    printf("agora que voce terminou o cadastro digite seu login: "); // login da conta cadastrada
    scanf("%s", login1);
    printf("senha: ");
    scanf("%s", senha1);

    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0)
    {

        printf("\n\nLogin Feito com Sucesso\n\n");
    }
    else
    {

        printf("\n\nDADOS INVALIDOS!\n\n");
        exit(0);
    }
}

void MostrarMenu()
{

    printf("*************************************\n\n");
    printf("******SEJA BEM VINDO AO IMOBNIP******\n\n");
    printf("*************************************\n\n");  // opçãoes de ecolhas sobre quais cadastros voce deseja

    printf("1) - CADASTRO DE CLIENTES\n");
    printf("2) - CADASTRO DE CORRETORES\n");
    printf("3) - SAIR DO SISTEMA\n\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opcao);

    
}
void CadastroClientes()
{

    char nome[30], cpf[12], telefone[15], endereco[50];

    printf("\n\nAdicione os dados do Cliente\n"); // cadastro de cliente
    printf("nome completo: ");
    scanf(" %[^\n]", nome);
    printf("telefone: ");
    scanf("%s", telefone);
    printf("cpf: ");
    scanf(" %s", cpf);
    printf("endereco: ");
    scanf(" %s", endereco);

    printf("\nCadastro do cliente concluido com sucesso!\n");
}

void CadastroCorretores()       // cadastro corretores
{
    setlocale(LC_ALL, "portuguese");

    printf("\n\nAdicione os dados do Corretor\n");
    char nome[50], creci[20], telefone[15], email[50], imobiliaria[50];

    printf("\n\nAdicione os dados do Corretor\n");

    printf("Nome completo: ");
    scanf(" %[^\n]", nome);

    printf("CRECI: ");
    scanf(" %s", creci);

    printf("Telefone: ");
    scanf(" %s", telefone);

    printf("E-mail: ");
    scanf(" %s", email);

    printf("Imobiliária associada: ");
    scanf(" %[^\n]", imobiliaria);

    printf("\nCadastro do corretor concluido com sucesso!\n");
}

int main()
{
    int sistema = 0;
    setlocale(LC_ALL, "");

    TelaLogin();

    MostrarMenu();

    switch (opcao)

    {

    case 1: // Gravar Clientes

        CadastroClientes();

        break;

    case 2: // Gravar Corretores

        CadastroCorretores();

        break;

    default:

        printf("você tem certeza disso? \n");
        printf("pressione 1 se tem certeza: ");
        scanf("%d", &sistema);
        switch (sistema)
        {
        case 1:
             exit(0); // encerra o programa
            break;
        }
    }

    getchar();

    return 0;
}
