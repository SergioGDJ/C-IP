#include<stdio.h>
#include<stdlib.h>

int somatorio(int num){
    if (num==0){
        return 0;
    }
    else{
        return num + somatorio(num-1);
    }
}

int main(){
    int num;
    
    scanf("%d", &num);
    printf("%d\n", somatorio(num));
}