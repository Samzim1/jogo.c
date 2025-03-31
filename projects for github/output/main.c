#include <stdio.h>
#include <string.h>

int main()
{
    /*declaração de variaveis e do número secreto*/
    int secret = 43;
    int number = 0;
    int tentativas = 5;
    int palpitef = 0;

    /*interface do nosso jogo */
    printf("\n=========================\n");
    printf("\n======SECRET NUMBER======\n");
    printf("\n=========================\n");

    /*expicação da funcionalidade do jogo*/
    printf("\n======================================================================\n");
    printf("\n                          EXPLICACAO:\n                               \n");
    printf("\n      voce tera 5 tentativas para descobrir o numero secreto       \n ");
    printf("\n  caso nao consiga acertar nas 5 tentativas , o jogo sera encerrado\n ");
    printf("\n======================================================================\n");

    printf("\nvamos comecar!\n");

    while (tentativas > 0)
    { /*programa que irá verificar se o jogador acertou ou n*/
        printf("\ndiga-me qual o seu palpite?: ");
        scanf("%d", &number);

        if (number == secret)
        {

            printf("voce acertou!!!");
            return 0;
        }
        else
        {
            tentativas--;
            printf("voce errou! tentativas restantes: %d tentativas\n", tentativas); /*mostrara o numero de tentativas que o jogador ainda tem*/
            if (number < secret)
            {
                printf("o numero secreto e maior do que : %d\n", number); /*dica para que o jogador possa acertar*/
            }
            else
            {
                printf(" o numero secreto e menor do que : %d\n", number);
            }
            if (number > 100)
            {
                printf("o numero nao vai alem do que 100\n");
            }
        }
    }
    printf("\nvoce acabou com todas as tentatvas!\n"); /*se não acertar é fim de jogo*/

    printf("=============================================================\n");
    printf("vou te dar uma ultima chance\n"); /*uma ultima chance*/
    printf("o numero esta entre 40 a 50\n");
    printf("qual seu palpite final?: ");
    scanf("%d", &palpitef);
    printf("=============================================================\n");

    if (palpitef == secret)
    {
        printf("\nfinalmente!!!, voce conseguiu acertar na ultima\n");
    }
    else
    {
        printf("\ninfelizmente voce nao conseguiu\n");
    }

    return 0;
}