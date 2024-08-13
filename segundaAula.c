#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main()
{
    float n1,n2,media;

    printf("Entre com as 2 notas: ");
    scanf("%f%f", &n1, &n2);
    media = (n1+n2)/2;
    if (media>=6.0){
        printf("Você passou com a média %.2f", media);
    }
    else{
        printf("Está de EXAME");
        printf("Você precisa de %.2f" , 10-media);
    }
}
