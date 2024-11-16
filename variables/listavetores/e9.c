/*
Faça um programa que leia vários pares de pontos e calcule a distância entre eles. Considere que a
distância entre dois pontos A(ax , ay , az ) e B(bx , by , bz ) é calculada como:
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //quantidade de pontos
    int n; 
    scanf("%d", &n); 

    //para cada ponto, ha 3 coordenadas.
    double vet[3*n];
    int i; //contador

    //escrever no vetor as coordenadas:
    for(i=0; i<3*n; i++){
        scanf("%lf", &vet[i]);
    } 

    /*exemplo:
    indice  0   1   2   3   4   5   6   7   8   
    vettor  1   4   3   7   12  1   0   2   3   
    */
    int k=0;
    
    double distancia[n-1];
    while(k<n){
        double a =0;
        for(i=0; i<3; i++){
            a = a + pow(vet[i+3*k] - vet[i+3+3*k],2);
        }
        distancia[k] = sqrt(a);
        k++;
    }
    for(i=0; i<n-1; i++)
        printf("%.2lf\n", distancia[i]);
}