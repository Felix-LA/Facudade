#include <stdio.h>

void BubbleShort(int v[], int n);

int main(){
    int quantidade;
    printf("Informe a quantidade de produtos: ");
    scanf("%d", &quantidade);

    int lista[quantidade];

    for(int i = 0; i <quantidade; i++){
        printf("Informe o preço do produto: ");
        int num;
        scanf("%d", &num);
        lista[i] = num;
    }

    BubbleShort(lista, quantidade);

    
    return 0;
}


void BubbleShort(int v[],int n){
    int cont = 0;
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                cont ++;
            }
        }
    }
    printf("Lista Ordenada: \n");
    for (int i = 0; i < n; i++){
        printf("%d\n", v[i]);
    }
    printf("A quantidade de modificações foram: %d\n", cont);
}