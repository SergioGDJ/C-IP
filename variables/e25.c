#include <stdio.h>

int main(){

    int n, i, divisores=0, x=1;
    printf("\nDigite um numero: ");
    scanf("%d",&n);

    while(divisores != n){
        x++;
        divisores = 0;
        for(i=1; i<=n; i++){
            if(x%i == 0)
                divisores++;      
        }
    }
    printf("\n\t%d\n",x);
    return 0;
}
