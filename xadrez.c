#include <stdio.h>

void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Torre move para: Direita \n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas)
{
    if (casas > 0)
    {   
        //loop externo
        for(int vertical = 0; vertical < 1; vertical++)
        //loop interno
        {
            for(int horizontal = 0; horizontal < 1; horizontal++)
            printf("Bispo move para: Cima e direita \n");
        }            
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Rainha move para: Esquerda \n");
        moverRainha(casas - 1);
    }
}

void moverCavalo(int casas)
{
    for (int i = 0; i < casas; i++)
    {
        int casasVerticais = 2;
        int casasHorizontais = 1;
        int v = 0, h = 0;

        // loop externo vertical
        for (v; v < casasVerticais; v++)
        {
            printf("Cavalo move para: Cima\n");
        } 
        //loop interno horizontal
        for (h; h < casasHorizontais; h++)
        {
            if (v == casasVerticais) 
            {
                printf("Cavalo move para: Direita \n");
            }
        }
            continue; // caso já tenha feito o movimento em "L" pode mover para o proximo loop.
    }
}

int main() {

//Recursividade Movimento das peças

    moverTorre(5);
    printf("\n");
    moverRainha(8);
    printf("\n");
    moverBispo(5);
    printf("\n");
    moverCavalo(1);
    printf("\n");

    return 0;
}
