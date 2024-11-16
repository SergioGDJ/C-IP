#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
    int a = 2403590350; 
    char caracteres[13];
    srand(time(NULL));
    
        
    
    printf("\n\n");
    sprintf(caracteres, "%d", a);
    for(int i=0; i<10; i++){
        printf("%c ", caracteres[i]);
    }
}