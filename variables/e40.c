#include <stdio.h>

int main(){
    //tabuada que comeca em n
    //k valores
    //o primeiro termo sera n+i
    //segundo termo n+i+s e assim por diante
    double n, k, i, s;  //variaveis do problema
    int t; //contador
    scanf("%lf%lf%lf%lf",&n,&i,&k,&s);
    printf("TABUADA DE SOMA: \n");
    for(t = 0; t<k; t++){
        //n + (i + 0*s) = n+i
        //n + (i +1*s) = n+i+s 
        double soma=0;
        soma = n + i + t*s;
        printf("%.1lf + %.1lf = %.1lf\n", n, soma-n, soma);
    }
    
    printf("TABUADA DA SUBTRACAO: \n");
    for(t=0; t<k; t++){
        //n - (i + 0*s) = n-i
        double subtracao=0;
        subtracao = n - i - t*s;
        printf("%.1lf - %.1lf = %.1lf\n", n, -1*(subtracao-n), subtracao);
    }

    printf("TABUADA DA MULTIPLICACAO: \n");
    for(t=0; t<k; t++){
        //n * (i + 0*s) = ni
        //n * (i+ 1*s) = ni + 1*ns
        double multiplicacao=0;
        multiplicacao = n * i + n*s*t;
        printf("%.1lf X %.1lf = %.1lf\n", n, multiplicacao/n, multiplicacao);
    }

    printf("TABUADA DA DIVISAO: \n");
    for(t=0; t<k; t++){
        //n / (i + 0*s)
        //n / (i + 1*s)
        double divisao = 0;
        divisao = n / (i + t*s);
        printf("%.1lf / %.1lf = %.1lf\n",n, i+t*s, divisao);
    }

}