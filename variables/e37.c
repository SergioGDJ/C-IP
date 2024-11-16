#include <stdio.h>
int main(){
    int n, i=1;
    double soma=0.0; 
    scanf("%d",&n);
    while(i<=n){
        soma +=  1.0/i;
        i++;
    }
    printf("\n%lf\n" ,soma);
}