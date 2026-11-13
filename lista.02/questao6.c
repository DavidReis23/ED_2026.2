#include <stdio.h>
#include <Windows.h>

int soma_ate(int n);
int soma_ate_iterativa(int n);

int main(void) {

    SetConsoleOutputCP (CP_UTF8);

    int n;

    printf("Digite um número: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (n > 10000) {
        printf("Valor muito grande para este teste.\n");
        return 1;
    }

    printf("Recursiva: %d\n", soma_ate(n));
    printf("Iterativa: %d\n", soma_ate_iterativa(n));

    return 0;
}

int soma_ate(int n) {
    if (n <= 0) {
        return 0;
    }

    return n + soma_ate(n - 1);
}

int soma_ate_iterativa(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    return soma;
}
