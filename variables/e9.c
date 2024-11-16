/*
9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).
*/
#include <stdio.h>

int main(){
    int media, p1, p2, p3;
    float n1, n2, n3, r=0;

    printf("\n1 - media aritmetica\n2 - media ponderada\n");
    scanf("%d", &media);
    printf("\nDigite os valores para a media\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    if (media == 2){
        printf("\nDigite p1, p2 e p3\n");
        scanf("%d%d%d", &p1, &p2, &p3);


    }

    switch(media)
    {
        case 1:
            r = (n1+n2+n3)/3;
            printf("\nA media aritmetica e %.2f", r);
            break;
        case 2:
            r = (p1*n1 + p2*n2 + p3*n3)/(p1 + p2 + p3);
            printf("\nA media ponderada e: %.2f\n", r);
            break;
        default:
            printf("Digite um valor valido.");
        
    }
    return 0;
}