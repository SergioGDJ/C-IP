#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *mystrpbrk(char *str1, char *str2){
    int i = 0, j, tam1, tam2;
    tam1 = strlen(str1);
    tam2 = strlen(str2);
    //printf("%d\n", tam2);
    //return &str1[1];
    for(i=0; i<tam1 - 1; i++){
        for(j=0; j<tam2 - 1; j++){
            if(str1[i] == str2[j]){
                printf("AQUI\n");
                return &(str1[i]);
            }
        }   
    }


    return NULL;
}

void limparString(char *str1){
    int i;
    
    for(i=0; i<1000; i++){
        str1[i] = '\0';
    }
}

void printarString(char *str1){
    int  i, tam;
    tam = strlen(str1);
    for(i=0; i<1000; i++){
        printf("%c", str1[i]);
    }
}

int main(){

    char str1[1000], str2[1000];
    char *p;
    int count=0;
    limparString(str1);
    limparString(str2);
    scanf("%s", str1);
    printf("iniciou\n");
    scanf("%s", str2);
    p = mystrpbrk(str1, str2);
   if(p != NULL) {
        while(*p != '\0'){
            printf("%c", *p);
            p++;
        }
    }
}