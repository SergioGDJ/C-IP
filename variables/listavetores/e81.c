/*
converter um decimal para binario
*/
#include <stdio.h>

int main(){
    
        int b10, b2[32], repeticao=0,  i;
        scanf("%d",&b10); //usuario digita um numero na base 10.
        if(b10 == 0)
            printf("0");
        for(i=0; i<32; i++){
            if(b10 != 0)
            {
                b2[i] = b10%2;
                b10 = b10/2;
                repeticao++;
            }

        }

        
        for(i=repeticao-1; i>=0; i--){
            printf("%d",b2[i]);
        }
        printf("\n");
    
    
}