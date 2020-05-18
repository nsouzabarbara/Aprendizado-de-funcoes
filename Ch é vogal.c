#include <stdio.h>
#include <ctype.h>

int isVogal(char ch) {
    switch (tolower(ch)) {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : return 1;
        default : return 0;
    }
}

int main() {
    char ch;
    printf("Insira um caractere: ");
    scanf(" %c", &ch);
    printf("Resultado: %d", isVogal(ch));
    return 0;
}
