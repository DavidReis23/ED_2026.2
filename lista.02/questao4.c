#include <stdio.h>
#include <Windows.h>

int nota_valida(float nota);
float calcular_media(float n1, float n2, float n3);
void situacao(float media);

int main(void) {

    SetConsoleOutputCP (CP_UTF8);

    float notas[3];
    float media;

    for (int i = 0; i < 3; i++) {
        printf("Digite a %da nota: ", i + 1);

        if (scanf("%f", &notas[i]) != 1) {
            printf("Entrada inválida.\n");
            return 1;
        }

        if (!nota_valida(notas[i])) {
            printf("Nota inválida! Use 0 a 10.\n");
            i--;
        }
    }

    media = calcular_media(notas[0], notas[1], notas[2]);

    printf("Média: %.2f\n", media);
    situacao(media);

    return 0;
}

int nota_valida(float nota) {
    return nota >= 0 && nota <= 10;
}

float calcular_media(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

void situacao(float media) {
    if (media >= 7.0) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}
