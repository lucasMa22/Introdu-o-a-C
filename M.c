#include <stdio.h>

int main() {
    int M;

    printf("Digite o número de linhas (M): ");
    scanf("%d", &M);

    // Loop para imprimir as linhas
    for (int i = 1; i <= M; i++) {
        // Loop para imprimir os asteriscos na linha atual
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Pula para a próxima linha após imprimir os asteriscos
    }

    return 0;
}
