//calcular a tabuada de um numero lido, entre 1 e 10.
#include <stdio.h>
int main(){

    int a=0, b, r;

    while( a <= 0){
        printf("Digite um numero: ");
        scanf("%d", &a);
    }
    for(b=1; b<=10; b++){
        r = a*b;
        printf("\t%d X %d = %d\n", a, b, r);
    }
    return 0;
}