#include <stdio.h>

int maiorNumero(int a, int b){
    int maior;
    maior = a;
    if(b>maior)
        maior = b;
    return maior;
}

int main(){
    int x, y, maior;
    scanf("%d%d", &x, &y);
    maior = maiorNumero(x, y);
    printf("%d\n", maior);
}