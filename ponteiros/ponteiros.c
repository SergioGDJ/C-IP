//O que e e como criar um ponteiro?
#include <stdio.h>

int main(){

    int num = 10; //Ao fazer isso, eu crio uma variavel num, essa variavel tem um endereco unico na memoria 

    printf("Valor de num: %d\n", num); //imprimindo a variavel num

    printf("Endereco de memoria  de num: %p\n", &num); //imprimindo o endereco de memoria da variavel num, eu nao uso %d, que e para inteiros

    /*
    O %p e a mascara de um endereco de memoria. Imprimir num e diferente de imprimir a variavel num, que e o valor que ela aquiriu ao longo do programa
    Para imprimir o endereco de memoria da variavel num, eu posso usar o &num. LEMBRAR DO SCANF.
    
    Normalmente, enderecos de memoria sao representados em hexadecimal.

    */

   //entendido isso, vamos agora passar para o ponteiro
    int *p;  //Este asterisco, diz para mim e para o computador que "p" nao e um simples inteiro e sim um ponteiro para uma regiao de memoria 
   // Que guarda um inteiro
    p = &num; //"p" esta guardando um endereco de memoria

    printf("Valor de p: %p\n", p);
    //Ao executar o programa, eu observo que o valor de p e o mesmo valor do endereco de memoria

    printf("Valor apontado por p: %d\n", *p);

    /*
    Eu utilizo asterisco em duas situacoes, quando eu crio a minha variavel, para indicar que a variavel e do tipo ponteiro
    eu tambem utilizo o asterisco quando eu quero obter o conteudo apontado por aquele ponteiro
    */ 

   //E importante nao confundir o valor de p com o endereco de p
   //O endereco de p e obtido usando &p
   printf("Endereco de p: %p\n", &p);

}