#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct {
    float real;
    float imag;
}complexo_t;

float comp(complexo_t n1, complexo_t n2, char oper);

#endif