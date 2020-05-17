#include <stdio.h>

long int n_segundos (int n_horas, char tipo) {
    long int resultado = n_horas;
    switch(tipo) {
        case 's' : 
        case 'S' : resultado *= 60;
        case 'm' :
        case 'M' : resultado *= 60;
    }
    return resultado;
} 

int main() {
    int horas;
    char tipo;
    printf("Insira o numero de horas: ");
    scanf("%d", &horas);
    printf("Insira o tipo requerido: ");
    scanf(" %c", &tipo);
    printf("Resultado: %ld", n_segundos(horas, tipo));
    return 0;
}
