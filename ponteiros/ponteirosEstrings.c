//Por que nao usamos o '&' para ler strings com scanf?
#include<stdio.h>
#include<stdlib.h>

int main(){
    char palavra[100];

    //scanf("%100[^\n]", palavra);
    //printf("\n%s\n\n", palavra);

    printf("%p\n", palavra);   //Aqui esta o porque eu nao digito o & antes do scanf***
    printf("%p\n", &palavra);  //Endereco do meu vetor (Retorna o endereco da primeira posicao do meu vetor)
    printf("%p\n", &palavra[0]);  //Endereco da primeira posicao do meu vetor
    //Todos esses printf retornam a mesma coisa, 3 enderecos de memoria iguais
    

    /*
    ***Eu nao digito o & no scanf, por que na linguagem C, quando eu crio um vetor, o nome deste vestor, ja e, por padrao, um ponteiro para a primeira 
    posicao deste vetor. entao, palavra e o mesmo que palavra = &palavra[0] 
    */
}