#include "ponto.h"

int dentroRet(Ponto *v1, Ponto *v2, Ponto *p) {
    return p->x >= v1->x && p->x <= v2->x &&
           p->y >= v1->y && p->y <= v2->y;
}