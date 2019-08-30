//compilador on line: https://repl.it/repls/SilkyWigglyNaturallanguage
#include<stdio.h>

void cadastro()
{
    printf("CADASTRO!\n");
}

void consulta()
{
    printf("CONSULTA\n");
}

void relatorio()
{
    printf("RELATORIO!\n");
}

void sair()
{
    printf("Ja vai??? Nao! Nao! Espere! Naa...\n");
}


int main()
{
    int continuar=1;

    do
    {
        printf("\n\MENU\n\n");
        printf("1. CADASTRO\n");
        printf("2. CONSULTA\n");
        printf("3. RELATORIO\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                cadastro();
                break;

            case 2:
                consulta();
                break;

            case 3:
                relatorio();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}