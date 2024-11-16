#include <stdio.h>
#include <stdlib.h>

int main(){
    int A; 
    int *B = &A;
    int **C = &B;

    printf("Endereco de A: %p\tConteudo de A: %d\n", &A, A);
    printf("Endereco de B: %p\tConteudo de B: %p\n", &B, B);
    printf("Conteudo apontado por B: %d\n", *B);
    printf("Endereco de C: %p\tConteudo de C: %p\n", &C, C);
    printf("Conteudo apontado por C: %p\n", *C);

    //*C aponta pro que tem dentro daquele endereco, que endereco? o endereco de B.
}