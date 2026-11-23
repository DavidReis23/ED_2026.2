#include <stdio.h>
#include "aluno.h"

int main(void) {

    Aluno a1 = {"Maria", "2026001", 'A', 8.0, 7.0, 9.0};
    Aluno a2 = {"Joao", "2026002", 'A', 5.0, 4.0, 6.0};
    Aluno a3 = {"Ana", "2026003", 'B', 9.0, 8.0, 9.0};

    Aluno *turmas[] = {&a1, &a2, &a3};

    imprime_aprovados(3, turmas);

    return 0;
}
