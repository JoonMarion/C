#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

//vari�veis
    int a, aq;
    float ra;

//ordem para o usu�rio
    printf("Selecione um n�mero inteiro:\n");
    scanf("%d", &a);

//sair do programa caso for �mpar
    if(a % 2 == 1)
       {printf("%d � �mpar\n\n", a);
        system("pause");}

//executar caso for par
    else
       {aq = a * a;
        ra = sqrt(a);}

//resultado
    printf("\n%d ao quadrado �: %d\n", a, aq);
    printf("\nA raiz de %d �: %.2f\n\n", a, ra);

    system("pause");
}
