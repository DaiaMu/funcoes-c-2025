#include <stdio.h>

void hello() {
    printf("Olá\n");
}

int soma(int num_a, int num_b) {
    return num_a + num_b;
}

int subtracao_positivo(int num_a, int num_b) {
    int resultado;
    if(num_a > num_b) {
        resultado = num_a - num_b;
    } else {
        resultado = num_b - num_a;
    }
    return resultado;
}

int main() {
    hello();

    printf("%d\n", soma(4, 5));
    
    printf("%d\n", subtracao_positivo(10, 5));
    printf("%d\n", subtracao_positivo(2, 4));

    return 0;
}