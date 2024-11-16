//n de entrada, calcular n!
#include <stdio.h>

int main(){
    printf("Digite um numero inteiro pra calcular o fatorial: ");
    int a, i,s=1;
    scanf("%d",&a);

    for(i=1; i<=a; i++){
        s= s*i;
    }
    printf("\n\n%d\n\n",s);
}