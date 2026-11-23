#include <stdio.h>
#include "aluno.h"

#define MEDIA_APROVACAO 7.0f

void imprime_aprovados(int n, Aluno **turmas) {

    for (int i = 0; i < n; i++) {

        float media = (turmas[i]->p1 +
                       turmas[i]->p2 +
                       turmas[i]->p3) / 3.0f;

        if (media >= MEDIA_APROVACAO) {
            printf("Matricula: %s\n", turmas[i]->matricula);
            printf("Nome: %s\n", turmas[i]->nome);
            printf("Turma: %c\n", turmas[i]->turma);
            printf("Media: %.2f\n\n", media);
        }
    }
}
