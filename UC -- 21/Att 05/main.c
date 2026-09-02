#include <stdio.h>

int main(){
    int v[5] = {5,2,3,1,4};
    for(int i = 0; i < 5; i++){
        int aux;
        if(v[i] > v[i+1]){
            aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
        printf("%d", v[i]);
    }

    return 0;
}