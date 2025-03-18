#include <stdio.h>

int main() {

//Variáveis

    int Bispo = 1, Torre = 1, Rainha = 1;

//While

    while (Bispo <= 5)
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
    } while (Torre <= 5);
    printf("\n");

//For

    for (Rainha; Rainha <= 8; Rainha++)
    {
        printf("Esquerda.\n");
    }
    printf("\n");
    

    return 0;
}
