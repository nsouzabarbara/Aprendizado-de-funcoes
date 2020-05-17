#include <stdio.h>

float valorAbsoluto(float x) {
    return (x >= 0) ? x : -x;
}

int main() {
    float numero;
    printf("Insira o numero: ");
    scanf("%f", &numero);
    printf("Modulo: %f", valorAbsoluto(numero));
    return 0;
}
