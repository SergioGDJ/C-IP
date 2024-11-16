//Imprimir todos os numeros de n ate zero
//A recursao consiste em eu resolver uma pequena parte do problema e em seguida chamar
//Uma instancia um pouco menor do meu problema.
#include<stdio.h>
#include<stdlib.h>

// void imprimir(long unsigned int x){ 
//     if(x==0){
//         printf("%lu ", x);
//     }
//     else{
//         printf("%lu ", x);
//         imprimir(x-1);
//     }
// }

int main(){
    long unsigned int n;
    printf("Digite um numero maior que zero: ");
    scanf("%lu", &n);
    long unsigned i;
    for(i=0; i<n; i++){
        printf("%lu", i);
    }
    // imprimir(n);

}