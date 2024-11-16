//distancia entre elementos proximos
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, t=0;
    scanf("%d", &a);
    do{
        int n, *vet, i, j;
        scanf("%d", &n);

        vet = malloc(n * sizeof(int));

        for(i=0; i<n; i++){
            scanf("%d", &vet[i]);
        }
        int distancia = 9999,
            count = 0, mod;
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                mod = vet[i] - vet[j];
                if(mod < 0)
                    mod = -mod;
                if(mod < distancia){
                    distancia = mod;
                }
                count++;
            }
        }
        
        printf("%d %d\n", distancia, count);
        t++;
        free(vet);
    }while(t<a);
}