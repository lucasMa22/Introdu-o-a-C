#include <stdio.h>

int main() {
    float peso_pescado, excesso = 0, multa = 0;

    printf("Informe a quantidade de pescado (em quilos): ");
    scanf("%f", &peso_pescado);

    if (peso_pescado > 50) {
        excesso = peso_pescado - 50;

        if (excesso > 0) {
            multa = excesso * 4; // Multa de R$ 4,00 por quilo excedente
            printf("Excesso de %.2f quilos. Multa de R$ %.2f.\n", excesso, multa);
        }
    } else {
        printf("Pesca dentro do limite legal. Nenhuma multa aplicada.\n");
    }

    return 0;
}
