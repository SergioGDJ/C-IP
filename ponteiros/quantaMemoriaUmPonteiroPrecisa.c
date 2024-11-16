#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;

    printf("Tamando do inteiro: %d\n", sizeof(int));
    printf("Tamando do ponteiro: %d\n", sizeof(p));

    //E importante observar que o tamanho do ponteiro e o dobro do tamanho do int.

    char *p2;
    printf("Tamando do *p2: %d\n", sizeof(p2));

    char *p3;
    printf("Tamando do *p3: %d\n", sizeof(p3));

    //Um endereco de memoria tem sempre o mesmo tamanho, por isso todos esses ponteiros precisam de 8 bytes de memoria
}