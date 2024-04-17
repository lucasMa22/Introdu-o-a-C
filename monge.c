#include <stdio.h>
#include <math.h>

int main() {
    int total_graos = 0;
    int quadro = 64; // número de quadrados em um tabuleiro de xadrez

    for (int i = 2; i < quadro; i++) {
        total_graos += pow(i, 2);
    }

    printf("O monge esperava receber um total de %d grãos de trigo.\n", total_graos);

    return 0;
}
