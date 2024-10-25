#include <stdio.h>
#include "complexo.h"

int main(){
    complexo_t n1;
    complexo_t n2;
    char oper;
    printf("Qual operação quer fazer? (+,-,*,/)");
    scanf("%c", &oper);
    printf("Qual o numero N1 real?: ");
    scanf("%f", &n1.real);
    printf("Qual o numero N1 imaginario?: ");
    scanf("%f", &n1.imag);
    printf("Qual o numero N2 real?: ");
    scanf("%f", &n2.real);
    printf("Qual o numero N2 imaginario?: ");
    scanf("%f", &n2.imag);
    
    comp(n1, n2, oper);

    return 0;
}
