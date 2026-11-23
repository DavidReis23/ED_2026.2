#include "aluno.h"

float media_turma(int n, Aluno **turmas, char turma) {

    float soma = 0.0;
    int quantidade = 0;

    for (int i = 0; i < n; i++) {

        if (turmas[i]->turma == turma) {

            float media = (turmas[i]->p1 +
                           turmas[i]->p2 +
                           turmas[i]->p3) / 3.0f;

            soma += media;
            quantidade++;
        }
    }

    if (quantidade == 0) {
        return 0.0;
    }

    return soma / quantidade;
}
