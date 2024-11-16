//Convert decimal number to binary numbe using recursive procecess
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void decimalBinary(int num){
    if(num>0){
        decimalBinary(num/2);
        printf("%d",num%2);
    }
}

int main(){
    int num;
    scanf("%d", &num);
    decimalBinary(num);
}