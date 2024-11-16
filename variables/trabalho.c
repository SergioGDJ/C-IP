#include <stdio.h>

int main(){
    printf("\n\n\tBem vindo a calculadora\n\n");
    int n= 3, k=1, j=1;
    char s;
    double soma, subtracao, inicio;
    while (n!=0)
    {
    printf("Tecle\n1 - SOMAR\n2 - SUBTRAIR\n3 - MULTIPLICAR\n4 - DIVIDIR\n5 - CALCULO DE RAIZ\n6 - POTENCIACAO\n0 - SAIR\n");
    
    scanf("%d", &n);

    if(n==1){
        printf("---------------------------------------------\n");
        printf("\nDigite os numeros a serem somados:\n");
        while(s != '='){
            scanf("%lf", &soma);
            soma += soma;
        }
        
    }
    else if(n==2){
        printf("---------------------------------------------\n");
        printf("\nDigite um numero, e os numeros a serem subtraidos do numero inicial:\n");
        
        while(s != '='){
            scanf("%lf",&subtracao);
            subtracao -= subtracao; 
        }
        printf("Subtracao = %lf",subtracao);
    }
    else if(n==3){
        printf("---------------------------------------------\n");
        printf("\nDigite dois numeros para multiplicar:\n");
    }
    else if(n==4){
        printf("---------------------------------------------\n");
        printf("\nDigite primeiro o dividendo, depois o divisor:\n");
    }
    else if(n==5){
        printf("---------------------------------------------\n");
        printf("Digite o radicando, depois o indice da raiz:\n");
    }
    else if(n==6){
        printf("---------------------------------------------\n");
        printf("\nDigite dois numeros, o primeiro e a base, o segundo o expoente:\n");
    }

    printf("---------------------------------------------");
    }
    
}