#include<stdio.h>
#include<stdlib.h>

int contarElementos(char *vet, int tam){
    if(tam==0){
        return 0;
    }
    else{
        if(vet[tam-1] == '5'){
            return 1 + contarElementos(vet, tam-1);
        }
        else
            return contarElementos(vet, tam-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        getchar();
        char *str;
        str = malloc(100);
        int i;
        if(str){
            for(i=0; i<100; i++){
                str[i] = '\0';
            }
            scanf("%99[^\n]", str);
            
            printf("%d\n", contarElementos(str, 100));
        }
    }
}