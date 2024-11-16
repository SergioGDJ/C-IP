#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printarVetor(char *str){
    int i = 0;
    while (str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
}

void limparVetor(char *str, int tam){
    int i;
    for(i = 0; i < tam; i++){
        *(str + i) = '\0';
    }
}

int main(){
    int x, t=0;
    scanf("%d", &x);
    while(t < x){
        char str1[51], str2[51], palavra[101];
        limparVetor(str1, 51);
        limparVetor(str2, 51);
        limparVetor(palavra, 101);
        scanf("%s", str1);
        scanf("%s", str2);
        
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int i = 0, j = 0, k = 0;
        
        while (i < len1 && j < len2){
            palavra[k] = str1[i];
            k++; i++;
            palavra[k] = str2[j];
            k++; j++;
        }
        
        while (i < len1){
            palavra[k] = str1[i];
            k++; i++;
        }
        
        while (j < len2){
            palavra[k] = str2[j];
            k++; j++;
        }
        
        palavra[k] = '\0';
        
        printarVetor(palavra);
        printf("\n");
        t++;
    }
}
