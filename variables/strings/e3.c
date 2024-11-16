#include <stdio.h>

int main(){
    char one[3] = {"one"};
    char two[3] = {"two"};
    char  three[5] = {"three"};
    int n, k=0;
    scanf("%d", &n);

    while(k<n){
        char palavra[5];
        scanf("%s", palavra);
        int i, a=0, b=0, c=0;
        for(i=0; i<3; i++){
            if(palavra[i] == one[i]){
                a++;
            }
            else if(palavra[i] ==two[i]){
                b++;
            }
        }
        for(i=0; i<5; i++){
            if (palavra[i] == three[i])
                c++;
        }
        if(a>=2)
            printf("%d\n", 1);
        else if(b>=2)
            printf("%d\n", 2);
        else if(c>=3)
            printf("%d\n", 3);
        k++;
    }
    printf("\n");
    return 0;
}