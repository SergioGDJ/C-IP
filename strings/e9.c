#include<stdio.h>
#include<stdlib.h>

int main(){
    int start, end;
    scanf("%d%d", &start, &end);
    int len;
    len = end - start;
    int *vet, *vet2;
    vet = malloc((len+1)*sizeof(int));
    vet2 = malloc((len+1)*sizeof(int));
    int i;
    for(i=0; i<=len; i++){
        vet[i] = start++;
    }
    for(i=0; i<len; i++){
        vet2[len-i] = vet[i];
    }
    for(i=0; i<=len; i++){
        printf("%d", vet[i]);
   
    }

    for(i=0; i<=len; i++){
        printf("%d", vet2[i]);
    }
    
    
}