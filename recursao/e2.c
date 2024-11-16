//quantas vezes o 'hi' ocorre
#include<stdio.h>
#include<stdlib.h>

int quantasVezesHi(char *vet, int tam){
    if (tam==1){
        if(vet[tam] == 'i' && vet[0] == 'h')
            return 1;
        else
            return 0;
    }
    else if(tam==2){
        if(vet[tam-1] == 'i' && vet[tam-2] == 'h')
            return 1;
        else
            return 0;
    }
    else{
        if(vet[tam-2] == 'h' && vet[tam-1] == 'i'){
            return 1 + quantasVezesHi(vet, tam-1);
        }
        else
            return quantasVezesHi(vet, tam-1);
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){    
        char *str;
        str = malloc(5000);
        if(str){
            int i;
            for(i-9; i<5000; i++){
                str[i] = '\0';
            }
            getchar();
            scanf("%4999[^\n]", str);
            printf("%d\n", quantasVezesHi(str, 5000));
        }
        else
            return 0;
        free(str);
    }
}