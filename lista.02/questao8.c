#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <Windows.h>

int fibonacci(int n);

long long fibonacci_longo(int n);
long long fibonacci_iterativo(int n);

int main(void) {

    SetConsoleOutputCP (CP_UTF8);

    int n;
    clock_t inicio, fim;
    double tempo_recursivo, tempo_iterativo;

    printf("Digite n (0 a 92): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 92) {
        printf("Entrada inválida. Use um inteiro de 0 a 92.\n");
        return 1;
    }

    if (n <= 47) {
        if (n >= 40) {
            printf("ATENÇÃO: o teste recursivo pode ser MUITO demorado.\n");
        }
        inicio = clock();
        int resultado = fibonacci(n);
        fim = clock();
        tempo_recursivo = (double)(fim - inicio) / CLOCKS_PER_SEC;

        if (resultado == -1) {
            printf("Recursivo int: resultado nao cabe em int.\n");
        } else {
            printf("Recursivo int: %d\n", resultado);
        }
        printf("Tempo recursivo: %.6f s\n", tempo_recursivo);
    } else {
        printf("Recursivo int ignorado: n muito grande para esse teste.\n");
    }

    inicio = clock();
    long long resultado_iterativo = fibonacci_iterativo(n);
    fim = clock();
    tempo_iterativo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Iterativo long long: %lld\n", resultado_iterativo);
    printf("Tempo iterativo: %.6f s\n", tempo_iterativo);
    printf("Limite de int em geral (32 bits): %d\n", INT_MAX);

    if (n <= 30) {
        printf("Recursivo long long: %lld\n", fibonacci_longo(n));
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int anterior = fibonacci(n - 1);
    int penultimo = fibonacci(n - 2);
    if (anterior == -1 || penultimo == -1 || anterior > INT_MAX - penultimo) {
        return -1;
    }
    return anterior + penultimo;
}

long long fibonacci_longo(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci_longo(n - 1) + fibonacci_longo(n - 2);
}

long long fibonacci_iterativo(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    long long anterior = 0, atual = 1;
    for (int i = 2; i <= n; i++) {
        long long proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return atual;
}
