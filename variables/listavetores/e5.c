#include <stdio.h>
int main(){
    int g=1;
    int n=1, i, maior, posicao;
    while(1){
        maior=0;
        posicao=0;
        scanf("%d",&n);
        if(n==0)
            break;
        int vet[n];
        for(i=0; i<n; i++)
            scanf("%d", &vet[i]);
        
        for(i=0; i<n; i++){
            if(vet[i]> maior){
                maior = vet[i];
                posicao = i;
            }
        }
        printf("%d %d\n",posicao, maior);
    }
    
}