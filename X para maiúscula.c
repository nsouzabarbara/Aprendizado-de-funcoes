#include <stdio.h>

int x_toupper(char ch) {
    if (ch >= 'a' && ch <= 'z') /* Se minuscula */
        return (ch + 'A' - 'a');
    else
        return ch; /* Devolve a propria */
    
}

/* Escreve todos os caracteres em minusculas */
int main() {
    char c;
    while(1) { /* Termina com CTRL-C */
        c = getchar();
        putchar(x_toupper(c));
    }
    return 0;
}
