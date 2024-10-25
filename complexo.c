#include <stdio.h>
#include "complexo.h"

float comp(complexo_t n1, complexo_t n2, char oper){
    float real, imag;
    switch (oper){
    case '+':
        real = n1.real + n2.real;
        imag = n1.imag + n2.imag;
        printf("seu numero real é: %.2f\n", real);
        printf("seu numero imaginario é: %.2f", imag);
        break;
    case '-':
        real = n1.real - n2.real;
        imag = n1.imag - n2.imag;
        printf("seu numero real e: %.2f\n", real);
        printf("seu numero imaginario e: %.2fi", imag);
        break;
    case '*': 
        real = (n1.real*n2.real) - (n1.imag*n2.imag);
        imag = (n1.real*n2.imag) + (n1.imag*n2.real);
        printf("seu numero real e: %.2f\n", real);
        printf("seu numero imaginario e: %.2fi", imag);
        break;
    case '/':
        real = (n1.real*n2.real + n1.imag*n2.imag) / n2.real*n2.real + n2.imag*n2.imag;
        imag = (n1.imag*n2.real - n1.real*n2.imag) / n2.real*n2.real + n2.imag*n2.imag;
        printf("seu numero real e: %.2f\n", real);
        printf("seu numero imaginario e: %.2fi", imag);
        break;
    
    default:
        break;
    }
}
