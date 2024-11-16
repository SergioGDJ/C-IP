//Maior frequencia
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int *vet, i, j;
    vet = malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }

    int num = vet[0], count=0, count_max=0;
    for(i=0; i<n; i++){
        count = 0;
        for(j=0; j<n; j++){
            if(vet[i] == vet[j]){
                count++;
            }           
        }
        if(count > count_max){
            count_max = count;
            num = vet[i];
        }
        if(count == count_max && vet[i] < num){
            num = vet[i];
        }
    }
    printf("\n%d\n%d\n", num, count_max);
}