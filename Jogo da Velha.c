#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Matriz, componentes da matriz, c é a casa que vai jogar e confirmação é lá no final
    int m[3][3], i, j, c, confirmacao;

    //Aqui é loop do baraguenedisdjohnson
    do {
    int jogadas = 0;

    //isso daqui é pra economizar espaço, mas é pra matriz ser 123456789
    int a = 1;
    for(i = 0; i < 3; i++)
        {
        for(j = 0; j < 3; j++)
            {
            m[i][j] = a++;
            }
        }
        
    //Primeira bizoiada na matriz
    for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            {
            printf("  %d \t", m[i][j]);
            }
        printf("\n");
        }
    printf("\n");

    //Aqui é o loop dentro de um jogo do barmenedyjoelson
    while (jogadas < 9) {

    //Frescuraiada, mas é legal ter esses 2, bem supimpa
    int jogador = (jogadas % 2) + 1;
    int simbolo = (jogador == 1) ? 0 : 999;

    printf("Vez do jogador %d: ", jogador);
    scanf("%d", &c);

    //Isso daqui é a parte carnuda que coloca os birinelson no valor da casa
    switch(c)
    {
        //Fórmulas bem doidonas que funcionam, isso foi a única coisa que eu copiei de IA porque economiza um espaço do kct
        case 1 ... 9:
        i = (c - 1) / 3;
        j = (c - 1) % 3;

        //Não pode ter 2 barriguesonnons em 1 barisjohnnis
        if(m[i][j] == 0 || m[i][j] == 999){
        printf("\nPode não man\n");
        } else {
        m[i][j] = simbolo;
        jogadas++;
        }

        break;

        default:
          printf("\nInválido\n");

    }
    printf("\n");

    //Matriz atualizada a cada jogada
    for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            {
            printf("  %d \t", m[i][j]);
            }
        printf("\n");
        }
    printf("\n");
    }

    //Depois de 9 jogadas, acabou o espaço, cai pra continuar ou não
    printf("Acabou! Continuar? 1 - Sim; 0 - Não\n");
    scanf("%d", &confirmacao);
} while(confirmacao == 1);
}
