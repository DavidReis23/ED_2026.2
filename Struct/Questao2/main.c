#include <stdio.h>
#include "vetor.h"

int main(void) {
    Vetor v1 = {1.0, 2.0, 3.0};
    Vetor v2 = {4.0, 5.0, 6.0};

    printf("Produto escalar: %.2f\n", dot(&v1, &v2));

    return 0;
}
