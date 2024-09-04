/*1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

#include <stdio.h>

int esta_em_fibonacci(int n) {
    int a = 0;
    int b = 1;
    int prox;

    if (n == 0 || n == 1) {
        return 1; 
    }
    prox = a + b;
    while (prox <= n) {
        if (prox == n) {
            return 1; 
        }
        a = b;
        b = prox;
        prox = a + b;
    }
    return 0;
}

int main() {
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);
    if (esta_em_fibonacci(numero)) {
        printf("O número %d pertence a sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence a sequência de Fibonacci.\n", numero);
    }
    return 0;
}