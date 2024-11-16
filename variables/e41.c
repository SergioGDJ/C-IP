#include <stdio.h>
int main(){
    int n, i=1, sequencia=0, sequencia_maxima=0;
    float valor0=0, valor1;
    scanf("%d",&n);

    while(n<=0){
        printf("digite um valor maior que zero: ");
        scanf("%d",&n);
    }
    while(i <=n){
        
        scanf("%f",&valor1);
        
        if (valor1 > valor0){
            sequencia++;
        }
        else 
            sequencia = 0;
        
        if (sequencia >= sequencia_maxima)
            sequencia_maxima = sequencia;
        i = i+1;
        valor0 = valor1;
        

    }
    printf("\n%d\n",sequencia_maxima);
}