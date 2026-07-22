#include<stdio.h>

//Att01
/*
int main(){
    char nome[100];
    int idade;
    float altura;

    printf("Informe o nome: ");
    scanf("%s", &nome);

    printf("Informe a idade: ");
    scanf("%d", &idade);

    printf("Informe a Altura: ");
    scanf("%f", &altura);

    printf("Informações Gerais!!! \n Nome: %s \n Idade: %d \n Altura: %.2f \n", nome, idade,altura);
    return 0;
}
*/

//Att02
/*
int main(){
    int num1, num2, soma,diferenca, produto,divisao;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    diferenca = num1 - num2;
    produto = num1 * num2;
    divisao = num1 / num2;

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("produto: %d\n", produto);
    printf("divisão: %d\n", divisao);

    return 0;
}
*/

//Att03
/*
int main(){
    float celsius, fahrenheit;

    printf("Informe a temperatura(C°): ");
    scanf("%f", &celsius);

    fahrenheit = ((celsius * 9) / 5) + 32;

    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
*/

//Att04
/*

int main(){
    
}
*/

//Att05
/*
int main(){
    float altura, area, base, perimetro;
    
    printf("Informe a Base: ");
    scanf("%f", &base);

    printf("Informe a Altura: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base * altura);

    printf("A Área do retângulo é: %.2f\n", area);
    printf("O Perímetro do retângulo é: %.2f\n", perimetro);

    return 0;
}
*/

//Att06
/**/

//Att07
/*
int main(){
    float velocidade, distancia, tempo;

    printf("Informe a Distancia: ");
    scanf("%f", &distancia);

    printf("Informe o Tempo: ");
    scanf("%f", &tempo);

    velocidade = distancia / tempo;

    printf("Velocidade = %.2f\n", velocidade);

    return 0;
}
*/

//Att08
/*
int main(){
    float raiz1,raiz2,a,b,c; 
    printf("Informe os numeros a, b e c: ");
    scanf("%f, %f, %f",&a,&b,&c);
    
    raiz1 = (- b + (b * b - 4 * a * c)) / (2 * a);
    raiz2 = (- b - (b * b - 4 * a * c)) / (2 * a);

    printf("Raiz1 = %.2f\n", raiz1);
    printf("Raiz2 = %.2f\n", raiz2);

    return 0;
}
*/

//Att09
/*
int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero Negativo\n");
    }
    else if(numero == 0) {
        printf("Numero Neutro\n");
    }
    else {
        printf("Numero Positivo\n");
    }

    return 0;
}
*/

//Att10
/*
int main(){
    float ValorCompra,ValorCompraFinal, taxa; int indicador;
    
    printf("Informe o Valor da Compra: ");
    scanf("%f", &ValorCompra);
    
    printf("Informe se a compra é Internacional(0 -> Não | 1 -> Sim): ");
    scanf("%d", &indicador);

    if (indicador == 0) {
        taxa = ValorCompra * 0.10;
    }
    else{
        taxa = ValorCompra * 0.20;
    }

    ValorCompraFinal = ValorCompra + taxa;

    printf("O valor Final da Compra é: %.2f \n", ValorCompraFinal);
    
    return 0;
}
*/

