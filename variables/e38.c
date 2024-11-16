#include <stdio.h>

int main(){
    int i, matricula;
    double nf=0, np=0, nl=0, npf=0, nota, frequencia;
    
    while(matricula != -1){
        
        nf=np=nl=npf=nota=frequencia=0;
        
        scanf("%d",&matricula);
        for(i = 1; i <= 8; i++){
            
           
            scanf("%lf",&nota);
            np += nota;
        }
        for(i=1;i<=5;i++  ){
            
            scanf("%lf",&nota);
            nl +=  nota;

        }
        
        scanf("%lf",&npf);
    
        scanf("%lf",&frequencia);

        nf = np*0.7/8 + 0.15*nl/5 + npf*0.15;
        
        if (frequencia >= 96){
            if (nf >= 6)
                printf("\n\tAprovado, media: %.2lf\n",nf);
            else 
                printf("\n\tReprovado, media: %.2lf\n",nf);
        }
        else
            printf("\n\tReprovado por frequencia. media: %.2lf\n",nf);
    }
    printf("-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1");
}