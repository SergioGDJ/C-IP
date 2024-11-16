/*
Dado um vetor V de tamanho N e um inteiro K, contabilize quantos elementos de V são maiores ou
iguais ao inteiro K.
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n<=0){
        scanf("%d", &n);
    }//ler um valor valido de n

    int vetor[n]; //tamanho do array: n
    int i; //contador

    for(i=0; i<n; i++){
        scanf("%d",&vetor[i]); //gravando o n valores no vetor, na posicao i.
    }
    int K, maior=0;
    scanf("%d",&K);
    //o proximo passo, e percorrer o vetor, e verificar se o elemento e igual a k, se for, somar 1 na variavel maior

    for(i=0; i<n; i++){
        if(vetor[i]>= K){
            maior++;
        }
    }
    printf("%d",maior);
}
