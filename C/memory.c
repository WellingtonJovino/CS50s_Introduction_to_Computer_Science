#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *x = malloc(3 * sizeof(int)); // malloc retorna um espaço na memoria, então aqui estou criando um espaço na memoria do tamanho de int e multiplicando por 3 para ter um array se int tem 4bytes irei ter 12bytes na memoria

    x[1] = 72;
    x[2] = 73;
    x[3] = 33;
}