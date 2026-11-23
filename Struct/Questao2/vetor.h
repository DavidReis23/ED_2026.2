#ifndef VETOR_H
#define VETOR_H

typedef struct vetor {
    float x;
    float y;
    float z;
} Vetor;

float dot(Vetor *v1, Vetor *v2);

#endif
