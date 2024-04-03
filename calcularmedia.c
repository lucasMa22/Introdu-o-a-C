#include <stdio.h>

int main() {
    float av1, av2, av3, media;

    printf("Digite a nota da AV1: ");
    scanf("%f", &av1);

    printf("Digite a nota da AV2: ");
    scanf("%f", &av2);

    printf("Digite a nota da AV3: ");
    scanf("%f", &av3);

    // Calcula a média considerando apenas av1 e av2
    media = (av1 + av2) / 2;

    printf("A média do aluno considerando AV1 e AV2 é: %.2f\n", media);

    // Verifica se o aluno está recuperado ou não
    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else if (media >= 5.0 && media < 7.0) {
        printf("Aluno em recuperação!\n");

        // Substitui a menor nota pela AV3, se necessário
        if (av1 <= av2) {
            av1 = av3;
        } else {
            av2 = av3;
        }

        // Recalcula a média considerando av1 e av2 atualizados
        media = (av1 + av2) / 2;

        printf("Nova média após recuperação: %.2f\n", media);

        if (media >= 5.0) {
            printf("Aluno recuperado!\n");
        } else {
            printf("Aluno reprovado!\n");
        }
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}
