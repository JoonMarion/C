#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

//cria��o da vari�vel n e cria��o do ponteiro

    int a, *pa;
    double b, *pb;
    char c, *pc;

//atribui��o ponteiros

    pa = &a;
    pb = &b;
    pc = &c;

//atribuindo valores

    a = 1;
    b = 2.34;
    c = '@';

    printf("\nValores: %d %.2f %c", a, b, c);
    printf("\nPonteiros: %d %.2f %c", *pa, *pb, *pc);
    printf("\nEndere�os: %p %p %p", pa, pb, pc);

//mais atribui��es

    *pa = 77;
    *pb = 0.33;
    *pc = '#';

    printf("\nValores: %d %.2f %c", a, b, c);
    printf("\nPonteiros: %d %.2f %c", *pa, *pb, *pc);
    printf("\nEndere�os: %p %p %p", pa, pb, pc);


}
