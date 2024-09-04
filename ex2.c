/*2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.*/

#include <stdio.h>
#include <ctype.h>  //Para utilizar a função tolower()

int contar_letras_a(const char *str) {
    int contagem = 0;
    while (*str) {
        if (tolower(*str) == 'a') {
            contagem++;
        }
        str++;
    }
    return contagem;
}

int main() {
    char texto[100];
    printf("Informe uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int resultado = contar_letras_a(texto);

    printf("A letra 'a' ocorre %d vezes na string informada.\n", resultado);

    return 0;
}
