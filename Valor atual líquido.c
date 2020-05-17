#include <stdio.h>

float potenciacao(float x, int n) {
    float resultado;
    int i;

    for(i = 1, resultado = 1.0; i <= n; i++)
        resultado *= x; /* resultado = resultado * x */
    return resultado;
}

float valorAtualLiquido(float x, int n, float t) {
    float resultado;
    int i;

    for (resultado = 0, i = 1; i <= n; i++)
        resultado += x/(potenciacao(1 + t, i)); /* resultado = resultado + x/(potenciacao(1 + t, i)) */
    return resultado;
}

int main() {
    float x, t;
    int expoente;
    printf("Insira o x e o t: ");
    scanf("%f %f", &x, &t);
    printf("Insira o expoente: ");
    scanf("%d", &expoente);
    printf("Resultado do valor atual liquido: %f", valorAtualLiquido(x, expoente, t));
    return 0;
}
