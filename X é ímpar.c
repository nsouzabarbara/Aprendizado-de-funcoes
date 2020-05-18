#include <stdio.h>

int x_isodd (int x) { /* se x nao e multiplo de 2 */
    return (x % 2); /* ou return (x % 2 == 1) */
}

int main() {
    float x;
    printf("Insira um numero: ");
    scanf("%d", &x);
    printf("Resultado: %f", x_isodd(x));
    return 0;
}
