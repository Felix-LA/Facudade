#include <stdio.h>

void bubbleshort(int v[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int buscaSequencial(int v[], int n, int busca){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if (v[i] == busca){
            return i;
        }
        else{
            cont++;
        }
    }
    return cont;
}

int buscaBinaria(int v[], int n, int busca){
    int low = 0, high = n - 1, cont = 0;
    while (low < high){
        int mid = (low + high) / 2;
        if (v[mid] == busca) return mid;
        else if (v[mid] < busca) {low = mid + 1, cont++;}
        else {high = mid - 1, cont++;}
    }
    return cont;
}

int main(){
    int quantidade, contadorBuscaBinaria,contadorBuscaSequencial, busca;
    printf("Informe a quantidade de codigos: \n");
    scanf("%d", &quantidade);

    int dados[quantidade], dadosOrdenados[quantidade];

    for (int i = 0; i < quantidade; i++){
        printf("Informe o Codigo: \n");
        scanf("%d", &dados[i]);
    }

    printf("Informe o numero da busca: \n");
    scanf("%d", &busca);


    contadorBuscaSequencial = buscaSequencial(dados,quantidade,busca);
    bubbleshort(dados, quantidade);
    contadorBuscaBinaria = buscaBinaria(dados,quantidade,busca);

    printf("A Quantidade de ordenações feitas na Busca binaria foi: %d\n", contadorBuscaBinaria);
    printf("A Quantidade de ordenações feitas na Busca sequencial foi: %d\n", contadorBuscaSequencial);

    return 0;
}