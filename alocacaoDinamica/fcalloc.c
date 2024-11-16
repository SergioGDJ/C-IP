//c alloc -> e muito parecida com a malloc, tambem retorna um ponteiro para a regiao alocada, caso nao consiga alocar a
//memoria, retorna NULL

/*
A unica diferenca entre as duas funcoes e a quantidade de parametros. 
malloc - > 1 parametro: quantidade de bytes
calloc - > 2 parametros: 1) quantidade de elementos para o qual vou alocar memoria, 2) quantidade de bytes para cada '1)'
*/  

int main(){
    int *x;

    x = calloc(1, sizeof(int));
}
