#include <stdio.h>

long int n_segundos (int n_horas) {
    return (long) n_horas * 3600;
} 

int main() {
    int horas;
    printf("Insira o numero de horas: ");
    scanf("%d", &horas);
    printf("Resultado do numero de segundos: %ld", n_segundos(horas));
    return 0;
}
