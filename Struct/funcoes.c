#include <stdio.h>
#include <stdlib.h>
//Comeco do estudo das funcoes em C

//Imagine que eu quero criar um programa que imprima 20 asteriscos. eu posso faze-lo assim:
/*
int main(){
    for(int i=0; i<20; i++)
        printf("*");
}
*/

//Este e um programa que imprime 20 asteriscos. imagine agora que eu queira imprimir 20 asteriscos inumeras vezes ao longo
//da execucao do meu programa. Eu deveria criar uma funcao para fazer isso, e apenas chama-la.




/*
void imprimirAsteriscos(){
    for(int i = 0; i<20; i++)
        printf("*");
    printf("\n");
}
int main(){
    imprimirAsteriscos();
    printf("Hello World!\n");
    imprimirAsteriscos();
}

*/

//Este ja e um programa muito mais interessante, pois eu criei o procedimento dps apenas o chamei, e ele foi executado.

//Isto tornou meu programa muito mais simples.

//E importante observar que como isso e apenas um procedimento, nao retorna nada. entao eu so chamo o procedimento. ele 
//nao fica armazenado em lugar algum.


//As variaveis declaradas dentro de um bloco, sao locais a este bloco. Isso significa que elas so sao reconhecidas nele

/*

O programa que invoca a funcao, pode enviar a ela argumentos. esses agumentos entram nos parametros da funcao

A passagem de argumentos para uma funcao e muito util. pense no exemplo anterior, caso eu quisesse uma funcao para imprimir
dois asteriscos, cinco e quatro. eu precisaria de um procedimento pra cada um. ao inves disso, eu posso criar um procedimento
com um parametro, que recebe um argumento na execucao do meu programa e executa quantas linhas eu passar de argumento.
*/

/*
void linha(int x){
    int i;
    for(i=0; i<x; i++)
        printf("*");
    putchar('\n');
}

int main(){
    linha(5);
}
*/

//No caso desse programa, eu passo um valor para meu procedimento void. E um programa mais completo.

//Qualquer tipo de dados podem ser passados para a funcao. Mesmo que o tipo de dados venha a ser criados pelo programador.

//Os tipos de dados que sao os parametros devem ser separados por virgula um do outro, e e absolutamente necessario que
//seja especificado seu tipo

//Um parametro nada mais e do que uma variavel local a funcao a que pertence. O parametro recebe uma copia do valor que o usu
//ario inicializa no programa, e executa a funcao assim. Na execucao do programa, o que o usuario digita nos parenteses da 
//funcao sao os argumentos, que sao copiados para os parametros.

/*
exemplo de aplicacao de funcoes
...
void funcao(char ch, int n, float x){
    ...
}
...

int main(){
    ...
    funcao('a', 15, 3.65);
    ...
}
Obseve que a passagem de parametrods se da de acordo com a ordem dos parametros da funcao.
ao invocar a funcao na main, eu passo os parametros ordenadamente, de forma que eles serao substituidos na minha funcao \
orginal
*/

//O numero de argumetos enviados a funcao deve ser igual ao numero de parametros da funcao, e estar ordenado

//fazer a alteracao do programa anterior para um paramentro de caracter, outro de quantos caracteres serao exibidos
/*
void imprimir(char ch, int x){
    for(int i = 0; i<x; i++){
        printf("%c", ch);
    }
    putchar('\n');
}

int main(){
    imprimir('s', 5);
    imprimir('d', 30);
}
*/
//essa funcao ja e muito mais sofisticada que a funcao anterior, pois, alem de receber a quantidade de caracteres como parame
//tro, ela ainda recebe o caracter q sera impresso na tela.

//OBS.: O CABECALHO DE UMA FUNCAO NUNCA DEVE CONTER PONTO E VIRGULA.

//Qualquer instrucao e admitida dentro de uma funcao, seja ate mesmo invocar outra funcao.

//Ate aqui, so foi vista o tipo de procedimento void, que nao retorna nenhum valor. a partir de agora, sera estudado funcoes
//com retorno. essas sao funcoes de fato, e nao apenas procedimentos.

//apos uma funcao realizar um procedimento, ela pode armazenar um unico resultado, que pode ser armazenado dentro de uma vari
//avel. caso eu nao armazene este resultado, eu irei perdelo. e o caso, por exemplo da funcao getchar(), caso eu queira sal
//val o seu valor, eu devo armazena-lo em uma variavel char a = getchar();, por exemplo.


//funcao soma:
/*
int soma(int x, int y){
    int resultado = x+y;
    return resultado;
}
int main(){
    printf("%d\n", soma(4,5));
}
*/
//esta funcao esta recebendo dois parametros, e com eles realiza operacoes. 

//eu poderia ainda fazer algo semelhante, usando apenas um procedimento.

/*
void soma(int a, int b){
    printf("%d", a+b);
}
int main(){
    soma(3,4);
}
*/
//a unica diferenca e que aqui, eu nao tenho retorno.

//Variaveis locais, tem um escopo. o escopo delas e a funcao onde sao declaradas.

//Passagem de vetores para funcoes

//eu devo passar o array e o seu tamanho, da segunte forma 
/*
#include <stdio.h>

// Função que recebe um array de inteiros e seu tamanho
void minhaFuncao(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int meuArray[5] = {1, 2, 3, 4, 5};

    // Chamando a função e passando o array e seu tamanho
    minhaFuncao(meuArray, 5);

    return 0;
}

*/
/*
O tamanho do array deve ser passado, porque em c, ao passar o array como argumento, apenas o enderoco de memoria do primeiro
elemento e passado. Dentro da funcao nao ha uma maneira direta de determinar o tamanho do array, pois ele em si, nao arma
zena o seu proprio tamanho

sem passar o tamanho do array, minha funcao vai tentar acessar compartimentos de memoria que nao foram definidos, assim, caus
ando um erro de memoria no meu programa.

portanto, passando o tamanho do array para a funcao, eu consigo iterar nesse array com seguranca, sem riscos para a memoria.
*/











































