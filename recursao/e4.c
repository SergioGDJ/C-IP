//soma recursiva
#include<stdio.h>
#include<stdlib.h>

int somaRecursiva(int num){
    if(num==0){
        return 0;
    }
    else{
        return num + somaRecursiva(num-1);
    }
}

int main(){
    int t; 
    scanf("%d", &t);
    while(t--){
        int a;
        scanf("%d", &a);
        printf("%d\n", somaRecursiva(a));
    }
}