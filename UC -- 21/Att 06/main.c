#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int lista[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            
            if (lista[j] > lista[j + 1]) {
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
                
                trocou = true;
            }
        }
        
        if (!trocou) {
            break;
        }
    }
}

int buscaBinaria(int lista[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (lista[meio] == alvo) {
            return meio;
        }

        else if (lista[meio] < alvo) {
            inicio = meio + 1;
        } 
        else {
            fim = meio - 1;
        }
    }

    return -1;
}

int main() {
    int minha_lista[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(minha_lista) / sizeof(minha_lista[0]);

    bubbleSort(minha_lista, n);

    printf("Lista ordenada: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", minha_lista[i]);
    }
    printf("\n");

    int alvo = 25;
    int resultado = buscaBinaria(minha_lista, n, alvo);

    if (resultado != -1) {
        printf("Elemento %d encontrado no indice %d!\n", alvo, resultado);
    } else {
        printf("Elemento %d nao foi encontrado na lista.\n", alvo);
    }

    return 0;
}