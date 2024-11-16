#include <stdio.h>

int main(){
    int soma=0, i=0,  n, r,a1;
    printf("Digite o numero de elementos da sequencia, seu primeiro termo e sua razao: ");
    scanf("%d%d%d",&n,&a1,&r);
    while(i<n){
        soma = soma + a1 + i*r;
        i++;
    }
    printf("Soma = %d",soma);

}