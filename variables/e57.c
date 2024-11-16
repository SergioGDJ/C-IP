/*
6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.
*/

#include <stdio.h>
int main(){
    int vet[10], i, k;
    while(1){
    scanf("%d",&k);
    
    for(i=0; i<10; i++){
        scanf("%d",&vet[i]);
    } //salvei os valores digitados no teclado no meu vetor de tamanho 10.
    if(k==0)
        break;
    else if(k == 1){
        for(i=0;i<10;i++){
            printf(" %d",vet[i]);
        }
    }
    else if(k==2){
        for(i=0;i<10;i++)
            printf(" %d",vet[9-i]);
    }
    
    
}
}