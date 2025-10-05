/*
3° problema em C,
entrada: 1 numero inteiro, principal objetivo é utilizar condicionais if/else para identificar se a entrada é PAR, IMPAR ou ZERO
saida: PAR\n / IMPAR\n / ZERO\n.
*/
#include <stdio.h>
int main(){
    int n;

    scanf("%d", &n);

    if(n == 0)
        return printf("ZERO \n");
    else if (n%2 == 0)
        return printf("PAR \n");
    else 
        return printf("IMPAR \n");
    return 0;
}