#include <stdio.h>

float verificacaoDeIntervalo (float x, float lim_inferior, float lim_superior) {
    return (x >= lim_inferior && x <= lim_superior);
}

int main() {
    float x, lim_inferior, lim_superior;
    printf("Insira um numero, o limite inferior e o limite superior respectivamente: ");
    scanf("%f %f %f", &x, &lim_inferior, &lim_superior);
    printf("Resultado: %f", verificacaoDeIntervalo(x, lim_inferior, lim_superior));
    return 0;
}
