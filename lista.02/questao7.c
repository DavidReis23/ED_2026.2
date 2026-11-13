#include <stdio.h>
#include <Windows.h>

long long fatorial(int n);
long long fatorial_iterativo(int n);

int main(void) {

    SetConsoleOutputCP (CP_UTF8);
    
    int n;

    printf("Digite um inteiro entre 0 e 20: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }
    if (n < 0 || n > 20) {
        printf("Use 0 a 20: valores maiores excedem long long de 64 bits.\n");
        return 1;
    }

    printf("Fatorial recursivo: %lld\n", fatorial(n));
    printf("Fatorial iterativo: %lld\n", fatorial_iterativo(n));
    return 0;
}

long long fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}

long long fatorial_iterativo(int n) {
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
