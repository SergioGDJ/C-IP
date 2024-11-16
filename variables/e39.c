/*
Supondo que a população de um país A seja de a habitantes com uma taxa anual de crescimento de 3%
e que a população de um país B seja de b habitantes, com uma taxa anual de crescimento de 1,5%, fazer um
algoritmo que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou
iguale a população do país B, mantidas essas taxas de crescimento
*/
#include <stdio.h>
int main(){
    int a, b, t=0;
    float crescimento=0;
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("\nA populacao do pais A ja e maior que de B.\n");
    else{
        while(a<b){
            a = a*1.03;
            b = b*1.015;
            t++;

        }
        printf("\n%d\n",t);
    }
}


