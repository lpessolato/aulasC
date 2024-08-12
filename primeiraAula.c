#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//M = c*p*t

void main()
{
    int p;
    float c,t,m;
    printf("Entre com o capital em R$: ");
    scanf("%f", &c);
    printf("Entre com a taxa em porcentagem: ");
    scanf("%f", &t);
    printf("Entre com o periodo em meses: ");
    scanf("%d", &p);
    m = c*p*t;

    printf("Montante é de R$ %.2f" ,m+c);
}
