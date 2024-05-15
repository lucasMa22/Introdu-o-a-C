#include <stdio.h>

int main() {
    float vetor[20];
    float resultado;
    char operacao;
    float segundo_valor;
    int i;

    // Pedindo ao usuário para inserir os 20 números reais
    printf("Digite 20 números reais:\n");
    for (i = 0; i < 20; i++) {
        scanf("%f", &vetor[i]);
    }

    // Pedindo ao usuário para escolher a operação
    printf("Escolha a operação:\n");
    printf("s - Soma\n");
    printf("sub - Subtração\n");
    printf("m - Multiplicação\n");
    printf("d - Divisão\n");
    scanf(" %c", &operacao);

    // Validando a escolha da operação
    if (operacao != 's' && operacao != 'sub' && operacao != 'm' && operacao != 'd') {
        printf("Operação inválida.\n");
        return 1;
    }

    // Pedindo ao usuário para inserir o segundo valor, se necessário
    if (operacao == 'd') {
        printf("Digite o segundo valor (diferente de zero) para a divisão:\n");
        scanf("%f", &segundo_valor);
        if (segundo_valor == 0) {
            printf("O segundo valor não pode ser zero.\n");
            return 1;
        }
    } else {
        printf("Digite o valor para a operação:\n");
        scanf("%f", &segundo_valor);
    }

    // Realizando a operação selecionada
    switch (operacao) {
        case 's': // Soma
            resultado = 0;
            for (i = 0; i < 20; i++) {
                resultado += vetor[i];
            }
            break;
        case 'sub': // Subtração
            resultado = vetor[0];
            for (i = 1; i < 20; i++) {
                resultado -= vetor[i];
            }
            break;
        case 'm': // Multiplicação
            resultado = 1;
            for (i = 0; i < 20; i++) {
                resultado *= vetor[i];
            }
            break;
        case 'd': // Divisão
            resultado = vetor[0] / segundo_valor;
            break;
    }

    // Exibindo o resultado da operação
    printf("Resultado: %.2f\n", resultado);

    return 0;
}
