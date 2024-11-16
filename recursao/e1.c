#include<stdio.h>
#include<stdlib.h>

int quantasVezes(char *vet, int tam){
    if(tam==0)
        return 0;
    else{
        if(vet[tam-1] == 'x'){
            return 1 + quantasVezes(vet, tam-1);
        }
        else
            return quantasVezes(vet, tam-1);
    }
}

int main(){
    int n, i;
    scanf("%d", &n);
    
    while(n){
        getchar();
        char *str;
        str = malloc(5000);
        for(i=0; i<5000; i++){
            str[i] = '\0';
        }
        scanf("%4999[^\n]", str);
        printf("%d\n", quantasVezes(str, 5000));
        free(str);
        n--;
    }
}