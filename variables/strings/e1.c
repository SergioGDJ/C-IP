//COMBINADOR
//implementar um programa que combina as letras de duas strings em uma outra string

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100], str[201];
    int i, n, k ;
    scanf("%d", &n);
    for(k=0; k<n; k++){
        
        
        scanf("%s%s", str1, str2);
        int a=0;

        for(i=0; i<201; i++){
            if(i%2 == 0){
                str[i] = str1[a];
                
            }
            else{
                str[i] = str2[a];
                a++;
            }
        }

        for(i=0; i<201; i++){
            printf("%c", str[i]);
        }
        printf("\n");
        
        for(i = 0; i < 100; i++){
            str1[i] = '\0';
        }
        for(i = 0; i < 100; i++){
            str2[i] = '\0';
        }
        for(i = 0; i < 201; i++){
            str[i] = '\0';
        }
    }   
    return 0;
}