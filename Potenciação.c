#include <stdio.h>

float potenciacao(float x, int n) {
    float resultado;
    int i;

    for(i = 1, resultado = 1.0; i <= n; i++)
        resultado *= x; /* resultado = resultado * x */
    return resultado;
}

int main() {
    float numero;
    int expoente;
    printf("Insira o numero: ");
    scanf("%f", &numero);
    printf("Insira o expoente: ");
    scanf("%d", &expoente);
    printf("Resultado da potenciacao: %f", potenciacao(numero, expoente));
    return 0;
}
