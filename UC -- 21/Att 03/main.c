#include <stdio.h>

//Att 01
/*
int main(){
    int Ma[3][2] , Mb[3][2], Mc[3][2];

    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <=1; c++){
            printf("Informe os valores [%d] [%d] da Matriz A: ", l, c);
            scanf("%d", &Ma[l][c]);
        }
    }


    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <=1; c++){
            printf("Informe os valores [%d] [%d] da Matriz B: ", l, c);
            scanf("%d", &Mb[l][c]);
        }
    }

    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <=1; c++){
            Mc[l][c] = Ma[l][c] + Mb[l][c];
        }
    }

    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <=1; c++){
            printf("%d ", Mc[l][c]);
        }
        printf("\n");
    }
    return 0;
    
}
*/


//Att 02
/*
int main(){
    int Ma[2][3], Mb[3][2], Mc[2][2] = {0};

    printf("--- Matriz A (2x3) ---\n");
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 3; c++){
            printf("Informe o valor para Ma[%d][%d]: ", l, c);
            scanf("%d", &Ma[l][c]);
        }
    }

    printf("\n--- Matriz B (3x2) ---\n");
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 3; c++){
            printf("Informe o valor para Mb[%d][%d]: ", c, l);
            scanf("%d", &Mb[c][l]);
        }
    }

    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            Mc[l][c] = 0;
            for(int k = 0; k < 3; k++){
                Mc[l][c] += Ma[l][k] * Mb[k][c];
            }
        }
    }

    printf("\n--- Matriz Resultante (Mc - 2x2) ---\n");
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            printf("%d\t", Mc[c][l]);
        }
        printf("\n");
    }

    return 0;
}
*/

//Att03
/*
int main() {
    int A[3][2];
    int A_transposta[2][3];
    int i, j;

    printf("Digite os elementos da matriz A (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            A_transposta[j][i] = A[i][j];
        }
    }

    printf("\nMatriz Original A (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d \t", A[i][j]);
        }
        printf("\n");
    }


    printf("\nMatriz Transposta (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d \t", A_transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/