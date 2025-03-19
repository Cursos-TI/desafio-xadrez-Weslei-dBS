#include <stdio.h>

int main() {

//Variáveis

    int Bispo = 0, Torre = 0, Rainha = 0, Cavalo = 0, MoveL = 0;

//While

    while (Bispo < 5)
    {
        printf("Cima, direita.\n");
        Bispo++;
    }
    printf("\n");

//Do-While

    do
    {
        printf("Direita.\n");
        Torre++;
    } while (Torre < 5);
    printf("\n");

//For

    for (Rainha; Rainha < 8; Rainha++)
    {
        printf("Esquerda.\n");
    }
    printf("\n");

    for (MoveL; MoveL < 1; MoveL++)
    {
        while (Cavalo < 2)
        {
            printf("Baixo,\n");
            Cavalo++;
        }
        printf("Esquerda.\n");
    }
    

    return 0;
}
