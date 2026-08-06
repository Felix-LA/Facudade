#include <stdio.h>

//Att01
/*
int main(){
    for (int i = 2; i <= 100; i++){
        if(i % 2 == 0){
            printf("%d \n",i);
        }
    }
    return 0;
}
*/

//Att02
/*
int main(){
    int num1, num2;
    printf("Digite o Numero: ");
    scanf("%d", &num1);
    printf("Digite o Numero: ");
    scanf("%d", &num2);

    if(num2 > num1){
        for (int i = num1; i <= num2; i++){
            if(i % 2 == 0){
                printf("%d \n",i);
            }
        }
    }
    else if (num1 > num2){
        for (int i = num2; i <= num1; i++){
            if(i % 2 == 0){
                printf("%d \n",i);
            }
        }
    }
    else{
        printf("Numeros Invalidos\n");
    }
    
    
    return 0;
}
*/

//Att03
/*
int main(){
    int num;
    printf("Informe o Numero: ");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++){
        int resultado = num * i;
        printf("%d x %d = %d \n", num,i,resultado);
    }

    return 0;
}
*/

//Att04
/*
int main(){
    int num, i, soma = 0, quantidade = 0;
 
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &num);
 
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0) {
            soma += i;
            quantidade++;
        }
    }
 
    printf("Soma dos multiplos de 3 entre 1 e %d: %d \n", num, soma);
    printf("Quantidade de multiplos de 3 encontrados: %d \n", quantidade);
 
    return 0;
}
*/

//Att05
/*
int main() {
    int n, m, i, j;
    float nota, somaTurma, somaGeral = 0;
    int totalAlunos = 0;
 
    printf("Digite a quantidade de turmas: ");
    scanf("%d", &n);
 
    printf("Digite a quantidade de alunos por turma: ");
    scanf("%d", &m);
 
    for (i = 1; i <= n; i++) {
        somaTurma = 0;
 
        for (j = 1; j <= m; j++) {
            printf("Nota do aluno %d da turma %d: ", j, i);
            scanf("%f", &nota);
            somaTurma += nota;
        }
 
        printf("Media da turma %d: %.2f\n\n", i, somaTurma / m);
 
        somaGeral += somaTurma;
        totalAlunos += m;
    }
 
    printf("Media geral da escola: %.2f\n", somaGeral / totalAlunos);
 
    return 0;
}
*/

//Att06
/*
int main() {
    int numeros[6];
    int i, maior;
 
    for (i = 0; i < 6; i++) {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
 
    maior = numeros[0];
    for (i = 1; i < 6; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
 
    printf("O maior valor digitado foi: %d\n", maior);
 
    return 0;
}
*/

//Att07
/*
int main() {
    float notas[5], soma = 0;
    int i;
 
    for (i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
 
    printf("Media da turma: %.2f\n", soma / 5);
 
    return 0;
}
*/

//Att08
/*
int main() {
    int numero, i, pares = 0, impares = 0;
 
    for (i = 1; i <= 10; i++) {
        printf("Digite o %d° numero: ", i);
        scanf("%d", &numero);
 
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
 
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
 
    return 0;
}
*/

//Att09
/*
int main() {
    int numeros[10];
    int i;
 
    for (i = 0; i < 10; i++) {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
 
    printf("Numeros na ordem inversa:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
 
    return 0;
}
*/

//Att10 Menu Banco
/*
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
                printf("Saldo: %.2f\n", saldo);
            break;

            case 3:
                printf("Informe o Valor a ser Sacado: \n");
                scanf("%f", &sacar);
                if (sacar <= saldo){
                    saldo -= sacar;
                    printf("Saldo: %.2f\n", saldo);
                    break; 
                }
                else{
                    printf("Saldo Invalido");
                    printf("Saldo: %.2f\n", saldo);
                    break;
                }
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
*/