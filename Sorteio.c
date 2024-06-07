#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Troca arr[j] e arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função para substituir números duplicados por -1
void removeDuplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = -1; // Substitui o número duplicado por -1
            }
        }
    }
}

int main() {
    // Define o tamanho do vetor
    int n = 6;
    int vetor[n];

    // Inicializa o gerador de números aleatórios com uma semente baseada no tempo
    srand(time(NULL));

    // Preenche o vetor com números aleatórios entre 0 e 60
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 61;
    }

    // Imprime o vetor
    printf("Vetor sem ordenação:\n");
    printArray(vetor, n);

    // Remove duplicatas substituindo-as por -1
    removeDuplicates(vetor, n);

    // Ordena o vetor
    bubbleSort(vetor, n);

    // Imprime o vetor ordenado
    printf("Vetor ordenado:\n");
    printArray(vetor, n);

    return 0;
}
