#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    // Solicita ao usuário um número real
    printf("Digite um número real: ");
    scanf("%f", &numero);

    // Calcula e mostra o valor absoluto usando a função fabs() da biblioteca math.h
    printf("O valor absoluto de %.2f é %.2f\n", numero, fabs(numero));

    return 0;
}
