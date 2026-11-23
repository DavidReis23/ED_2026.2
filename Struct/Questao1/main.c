#include <stdio.h>
#include "ponto.h"

int main(void) {
    Ponto v1 = {0.0, 0.0};
    Ponto v2 = {10.0, 10.0};
    Ponto p = {15.0, 5.0};

    printf("Resultado: %d\n", dentroRet(&v1, &v2, &p));

    return 0;
}