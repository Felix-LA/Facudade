#include <stdio.h>

//Att 01
/*
int main(){
    int Ma[3][2] , Mb[3][2], Mc[3][2];

    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <=1; c++){
            printf("Informe os valores da Matriz A: ");
            scanf("%d", &Ma[l][c]);
        }
    }


    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <=1; c++){
            printf("Informe os valores da Matriz B: ");
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

int main(){
    int Ma[2][3] , Mb[3][2], Mc[2][2] = {0};

    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <=1; c++){
            printf("Informe os valores da Matriz A: ");
            scanf("%d", &Ma[l][c]);
        }
    }


    for(int l = 0; l <= 1; l++){
        for(int c = 0; c <=2; c++){
            printf("Informe os valores da Matriz B: ");
            scanf("%d", &Mb[l][c]);
        }
    }

    for(int l = 0; l <= 1; l++){
        for(int c = 0; c <=1; c++){
            Mc[l][c] += Ma[c][l] * Mb[l][c];
            
        }
    }

    for(int l = 0; l <= 1; l++){
        for(int c = 0; c <=1; c++){
            printf("%d ", Mc[l][c]);
        }
        printf("\n");
    }
    return 0;
}