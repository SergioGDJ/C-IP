#include<stdio.h>
#include<stdlib.h>

int main(){
    int *v1, *v2;
    int i;
    int q1, q2;
    int *vr;
    scanf("%d%d", &q1, &q2);
    v1 = malloc(q1 * sizeof(int));
    v2 = malloc(q2 * sizeof(int));
    int tam = q1+ q2;
    vr = malloc(tam * sizeof(int));

    for(i=0; i<q1; i++)
        scanf("%d", &v1[i]);

    for(i=0; i<q2; i++)
        scanf("%d", &v2[i]);

    int k=0, j=0; i=0;
    while(q1-- && q2--){
        if(v1[k] > v2[j]){
            vr[i] = v1[k];
            i++;
            k++;
        }
        else{
            vr[i] = v2[j];
            i++;
            j++;
        }
    }
    if(q1 < 0) q1 == 0;
    while(q1--){
        vr[i] = v2[j];
        i++;
        j++;
    }
    if(q2 < 0) q2 == 0;
    while(q2--){
        vr[i] = v1[i];
        i++;
        k++;
    }

    for(i=0; i<q2+q1; i++)
        printf("%d ", vr[i]);

    free(v1);
    free(v2);
    free(vr);
}