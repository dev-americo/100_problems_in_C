/*
1° Problema em C,
entrada: 2 inteiros positivos A e B, principal objetivo é aplicar conceitos de scanf, printf. Como esses 2 numeros da entrada devemos realizar a soma deles.
saída: "Olá Soma = X", sendo X valor da soma entre A e B.
*/
#include <stdio.h>

int main(){

    int a, b;
    int soma = 0;
    scanf("%d %d", &a, &b);
    soma = a + b;
    printf("Ola! %d\n", soma);
    return 0;
}