#include <stdio.h>

int main(){
    int x, y, i=0, z;
    scanf("%d%d",&x,&y);
    if (x%2 == 0){
        while(i < y){
            z = x + 2*i;
            i++;
            printf("\n%d",z);
        }
    }
    else
        printf("\nO primeiro numero nao e par.\n");
}