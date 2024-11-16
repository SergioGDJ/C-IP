#include <stdio.h>
int main(){
    int x,i, divisores=0;
    while(x < 1){
        printf("\nDigite um valor maior que 1: ");
        scanf("%d",&x );      
    }
    for(i=1; i<=x; i++){
        if(x%i==0)
            divisores++;

    } 
    if(divisores >2)
        printf("NAO E PRIMO");
    else
        printf("PRIMO");    
}