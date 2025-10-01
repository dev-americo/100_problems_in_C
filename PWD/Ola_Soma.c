//Problema 1, receber 2 numeros inteiros e fazer a soma deles
//Saída "Olá Soma = X", sendo X resultado da soma
#include <stdio.h>

int main(){
    int a, b;
    int soma = 0;
    scanf("%d %d", &a, &b);
    soma = a + b;
    printf("Ola! %d\n", soma);
    return 0;
}