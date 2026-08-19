#include <stdio.h>

float soma(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multiplicacao(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}


int main(){
    float num1, num2, resultado;
    int operacao;

    do
    {
        printf("Informe um numero: ");
        scanf("%f", &num1);

        printf("Informe um numero: ");
        scanf("%f", &num2);

        printf("Calculadora\n");
        printf("1 - + Soma\n");
        printf("2 - - Subtração\n");
        printf("3 - * Multiplicação\n");
        printf("4 - / Divisão\n");
        printf("0 - Sair\n");
        printf("Informe a operação: ");
        scanf("%d", &operacao);

        switch (operacao)
        {
        case 1:
            resultado = soma(num1,num2);
            printf("%.2f\n", resultado);
            break;
        case 2:
            resultado = subtracao(num1,num2);
            printf("%.2f\n", resultado);
            break;
        case 3:
            resultado = multiplicacao(num1,num2);
            printf("%.2f\n", resultado);
            break;
        case 4:
            resultado = divisao(num1,num2);
            printf("%.2f\n", resultado);
            break;
        case 0:
            printf("Bye Bye\n");
            break;
        default:
        printf("Selecione um opção valida\n");
            break;
        }
    } while (operacao != 0);

    


    return 0;
}