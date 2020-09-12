#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float t;

    float res;

    printf("Por favor! Digite um numero AGORA: ");
    scanf("%f", &t);

    res = ((0.2*t)+(0.07*t*t)+((0.023/3)*t*t*t));

    printf("Valor do fatorial: %f", res);
}
