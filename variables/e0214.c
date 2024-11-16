#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if (x< 100000)
        x = x + 1000;
    printf("salario = %d",x);


    return 0;
}