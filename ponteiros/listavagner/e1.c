#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Sempre lembrando que o nome do vetor x[], e um ponteiro para x[0].
void descobrirValores(int *v, int me, int ma, int tam){
    int i;
    ma = me = v[0];
    
    for(i=1; i < tam; i++){
        if(v[i] < me)
            me = v[i];
        if(v[i] > ma)
            ma = v[i];
    }
    printf("Na funcao, o menor: %d\tmaior: %d\n", me, ma);
}

int main(){
    int vet[] = {10, 11, 23, 0, 505}, menor, maior;
    descobrirValores(vet, menor, maior, 5);

    printf("Na main, o menor: %d\tmaior: %d\n", menor, maior);
    //Por que que maior e menor na main nao assumem os mesmos valores que na funcao?
    //Isso ocorre porque os valores sao passados para a funcao por valor, ou seja, e feita uma copia dos valores, que e 
    //mandada para a funcao descobrirValores(). 
    //Ou seja, eu peguei O VALOR da variavel menor, o VALOR da variavel maior e mandei para a funcao, como uma copia
    
    //Para resolver esse problema, ao inves de passagem de parametro por valor, eu devo utilizar a passagem por referencia.
    //ver e1.1.c
    
}