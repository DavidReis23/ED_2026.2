// Questão 4 Ponteiros e funções

#include <stdio.h>

void trocar(int *a, int *b);

int main(void)
{
    int a = 10;
    int b = 20;

    trocar(&a, &b);

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}

void trocar(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

// Questão 5 Percorrendo vetores com ponteiros

#include <stdio.h>

int main(void)
{
    int vet[5];
    int *p = vet;
    int soma = 0;
    int maior;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", p + i);
    }

    maior = *p;

    for (int i = 0; i < 5; i++)
    {
        soma += *(p + i);

        if (*(p + i) > maior)
        {
            maior = *(p + i);
        }
    }

    printf("\nSoma dos elementos: %d\n", soma);
    printf("Maior elemento: %d\n", maior);

    return 0;
}
