#ifndef ALUNO_H
#define ALUNO_H

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};

typedef struct aluno Aluno;

void imprime_aprovados(int n, Aluno **turmas);

#endif
