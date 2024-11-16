#include <stdio.h>
#include <math.h>

int main(){
    int t, k;
    scanf("%d", &t);
    for(k=0; k < t; k++){
        int i, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0, n9=0, n0=0;
        char numero[1000000];
        for(i=0; i< 1000000; i++){
            numero[i] = '\0';
        }
        scanf("%s", numero);

        for(i=0; i<1000000; i++){
            if(numero[i] == '1')
                n1++;
            else if(numero[i] == '2')
                n2++;
            else if(numero[i] == '3')
                n3++;
            else if(numero[i] == '4')
                n4++;
            else if(numero[i] == '5')
                n5++;
            else if(numero[i] == '6')
                n6++;
            else if(numero[i] == '7')
                n7++;
            else if(numero[i] == '8')
                n8++;
            else if(numero[i] == '9')
                n9++;
            else if(numero[i] == '0')
                n0++;
        }
        long int qled;
        qled = n0*6 + n9*6 + n8*7 + n7*3 + n6*6 + n5*5 + n4*4 + n3*5 + n2*5 + n1*2;

        printf("%ld leds", qled);
        printf("\n");
    }
}