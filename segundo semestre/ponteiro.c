#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

//cria��o da vari�vel n e cria��o do ponteiro
    int n = 10;
    int *p;

    p = &n;

    *p = 20;

    printf("%d\n", n);
    printf("%d\n", *p);
    printf("%d\n", p);
}

