#ifndef PONTO_H
#define PONTO_H

typedef struct ponto {
    float x;
    float y;
} Ponto;

int dentroRet(Ponto *v1, Ponto *v2, Ponto *p);

#endif