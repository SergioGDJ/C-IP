#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Sempre lembrando que o nome do vetor x[], e um ponteiro para x[0].
void descobrirValores(int *v, int *me, int *ma, int tam){
    int i;
    *ma = *me = v[0];  //alterando nao o endereco do ponteiro ou seu conteudo, e sim para o que ele aponta
    
    for(i=1; i < tam; i++){
        if(v[i] < *me)
            *me = v[i];
        if(v[i] > *ma) 
            *ma = v[i];
    }
    printf("Na funcao, o menor: %d\tmaior: %d\n", *me, *ma);
}

int main(){
    int vet[] = {10, 11, 23, 0, 505}, menor, maior;
    descobrirValores(vet, &menor, &maior, 5); //Ao inves de passar o conteudo da variavel, vou passar o endereco da variavel

    printf("Na main, o menor: %d\tmaior: %d\n", menor, maior);
}