#include <stdio.h>

int main() {
    int num, maior = 0;

    printf("Digite uma sequência de números (0 para parar):\n");

    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }

    } while (num != 0);

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}
