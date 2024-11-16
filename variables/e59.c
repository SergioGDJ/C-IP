#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//tentativa de implementacao buble sort

int main(){
    int k;
    scanf("%d", &k);
    int  vetor[k], i, copia, j=0;
    //indice:    0  1  2  3  4
    
    //vetor[5]:  5  3  1  0  7
    
    srand(time(NULL));
    for(i=0; i<k; i++)
        vetor[i] = rand()%100;
    
    do{
        j=0;
        for(i=0; i<k-1; i++){
            
            if(vetor[i] > vetor[i+1]){
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
                j = 1;
            }
        }
    }while (j);
    for(i=0; i<k; i++)
        printf("%d ", vetor[i]);
    
}