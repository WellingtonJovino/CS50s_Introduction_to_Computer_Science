#include <stdio.h>

void swap(int *a, int *b);

void main(void)
{
    int x = 1;
    int y = 2;

    printf("x = %i e y = %i\n", x, y);
    swap(&x, &y); // '&' pega o endereço das variáveis
    printf("x = %i e y = %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a; // 'tmp' vai até a memoria 'a' e pega o valor que está lá
    *a = *b; // 'a' vai até a memoria 'b' e pega o valor que está lá
    *b = tmp; // a memoria 'b' recebe o valor de tmp
}