#include <stdio.h>

int main(){

    int a;
    float b, c;
    printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
    scanf("%d", &a);
    switch(a){
        case 1: 
        {
            printf("\nDigite os valores a serem somados:\n");
            scanf("%f%f",&b, &c);
            printf("\n%.2f + %.2f = %.2f\n", b, c, b+c);
        }
        case 2:
        {
            printf("\nDigite os numeros a serem subtraidos:\n");
            scanf("%f%f",&b,&c);
            printf("\n%.2f - %.2f = %.2f\n",b,c,b+c);
        }
        case 3:
        {
            printf("\ndigite os numeros a serem multiplicados:\n");
            scanf("%f%f",&b,&c);
            printf("\n%.2f X %.2f = %.2f\n",b,c,b*c);   
        }
        case 4:
        {
            printf("\ndigite os valores a serem divididos. o segundo numero deve ser diferente de zero.\n");
            scanf("%f%f",&b,&c);
            while(b==0)
            {
                printf("\ndigite um valor valido para o segundo numero\n");
                scanf("%f",&b);
            }
            printf("\n%.2f/%.2f = %.2f\n",b,c,c/b);
        }   
    }
    return 0;

}