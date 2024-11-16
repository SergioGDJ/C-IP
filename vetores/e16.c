#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, k, i;
    scanf("%d%d", &n, &k); 
    //K e o minimo de presencas que e necessario
    int vet[1000], adiantado=0;
    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    int ordem[1000], t=0;
    for(i=0; i<n; i++){
        if(vet[i] <= 0){
            adiantado++;
            ordem[t] = i;
            t++;
        }
    }
    if(adiantado >= k){
        printf("NAO\n");
        for(i=0; i<t; i++){
        printf("%d\n", (ordem[t-i-1]+1));
        }
    }
    else{
        printf("SIM\n");
    }
    
}