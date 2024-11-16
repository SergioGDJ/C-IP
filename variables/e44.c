#include <stdio.h>
int main(){
    int matricula, horas=1;
    double valorhora;
    while(matricula != 0 || horas!=0 || valorhora != 0){
        scanf("%d%d%lf",&matricula, &horas, &valorhora);
        printf("\n%d %.2lf",matricula , valorhora*horas);
    }
}