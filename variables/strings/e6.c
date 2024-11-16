//verificacao de string palindroma
#include <stdio.h>


int main(){
    char palavra[200];
    
    while(scanf("%s", palavra) != EOF)
    {   
        char invertida[200];
        int tam=0, i, count=0;
        for(i=0; i<200; i++){
            if(palavra[i]!= '\0'){
                tam++;
            }
        }


        for(i=0; i < tam; i++){
            invertida[i] = palavra[tam-i-1];
        } 
        for(i=0; i<tam; i++){
            if(palavra[i] == invertida[i]){
                count++;
            }
        
        }
        
        if(count == tam){
            printf("sim");
        }
        else    
            printf("nao");
        printf("\n");
        for(i=0; i<200; i++){
            palavra[i] = '\0';
            invertida[i] = '\0';
        }
        
    }
}