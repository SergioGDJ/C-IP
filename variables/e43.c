/*Programa para numeros primos*/
#include <stdio.h>

int main(){
    int n; //numero primo ou nao primo.
    int i=1; //contador. 
    int divisores = 0;
    scanf("%d",&n);

    while(i<=n){
        if(n%i==0){
            
            divisores++;
        }
        i = i +2;
    }
    if (divisores <= 2)
        printf("\nPrimo.\n");
    else
        printf("\nNao primo.\n");

}