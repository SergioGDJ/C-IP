#include <stdio.h>

int main(){
    int i, j=1, n, k=1;
    printf("Digite a quantidade de times que ira jogar: ");
    scanf("%d", &n);

    if (n <=1)
        printf("Campeonato invalido!");
    
    else
    {
        for(j=1; j<=n; j++){
            for(i =j + 1; i <=n; i++){
                
                printf("FINAL %d: TIME%d X TIME%d\n",k, j, i);
                
                k++;
            }
        }
    }    

}