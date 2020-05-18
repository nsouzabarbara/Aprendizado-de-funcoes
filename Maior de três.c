#include <stdio.h>

float maiorDeTres (float x, float y, float w) {
    if (x > y) {
        if (x > w)
            return x;
        else
            return w;
    }
    else {
        if (y > w)
            return y;
        else
            return w;
    }
}

int main() {
    float x, y, w;
    printf("Insira os tres numeros: ");
    scanf("%f %f %f", &x, &y, &w);
    printf("Resultado: %f", maiorDeTres(x, y, w));
    return 0;
}
