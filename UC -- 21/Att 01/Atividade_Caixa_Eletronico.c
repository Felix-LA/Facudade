#include <stdio.h>

int main(){
    int acao;
    float saldo = 1000.00, depositar,sacar;
    do{
        printf("=======================\n===CAIXA ELETRONICO====\n=======================\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Despositar\n");
        printf("3 - Sacar\n");
        printf("0 - Sair\n");
        printf("Escolha uma Opção: \n");
        scanf("%d", &acao);
        
        switch(acao){
            case 1:
                printf("O saldo da Conta é: %.2f\n", saldo);
                break;
                
            case 2:
                printf("Informe o Valor a ser Depositado: \n");
                scanf("%f", &depositar);
                saldo += depositar;
            break;

            case 3:
                printf("Informe o Valor a ser Sacado: \n");
                scanf("%f", &sacar);
                saldo -= sacar;
                break; 
            case 0:
                printf("\nSAINDOOO!!!\n");
                break;
            
            default:
                printf("\nOpcao invalida! Tente novamente.\n\n");
                break;
        }
    }
    while (acao != 0);

    return 0;
}