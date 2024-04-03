#include <stdio.h>

int main() {
    int idade, quociente, resto;

    // Solicita a idade do usuário
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Calcula o quociente e o resto da divisão por quatro
    quociente = idade / 4;
    resto = idade % 4;

    // Mostra o quociente e o resto da operação
    printf("O quociente da idade dividida por 4 é: %d\n", quociente);
    printf("O resto da idade dividida por 4 é: %d\n", resto);

    return 0;
}
