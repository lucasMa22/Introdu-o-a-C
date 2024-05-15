#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int soma[10];
    int i;

    // Pedindo ao usuário para inserir valores para o primeiro vetor
    printf("Digite os 10 números do primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Pedindo ao usuário para inserir valores para o segundo vetor
    printf("Digite os 10 números do segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Calculando a soma dos elementos de mesma posição e armazenando no terceiro vetor
    for (i = 0; i < 10; i++) {
        soma[i] = vetor1[i] + vetor2[i];
    }

    // Exibindo os elementos do terceiro vetor
    printf("A soma dos elementos de mesma posição é:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", soma[i]);
    }
    printf("\n");

    return 0;
}
