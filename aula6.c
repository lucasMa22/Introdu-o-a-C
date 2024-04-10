#include <stdio.h>

float calcularPesoIdeal(float altura, char genero) {
    if (genero == 'M' || genero == 'm') {
        return (72.7 * altura) - 58;
    } else if (genero == 'F' || genero == 'f') {
        return (62.1 * altura) - 44.7;
    } else {
        printf("Gênero inválido! Por favor, insira M para masculino ou F para feminino.\n");
        return -1; // Retorna um valor negativo para indicar erro
    }
}

int main() {
    float altura, pesoIdeal;
    char genero;

    printf("Informe sua altura em centímetros: ");
    scanf("%f", &altura);

    printf("Informe seu gênero (M/F): ");
    scanf(" %c", &genero);

    pesoIdeal = calcularPesoIdeal(altura / 100, genero);

    if (pesoIdeal >= 0) {
        printf("Seu peso ideal é: %.2f kg.\n", pesoIdeal);
    }

    return 0;
}
