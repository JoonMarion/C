#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

//vari�veis
    int n, cont;

//ordem para o usu�rio
    printf("Selecione um n�mero inteiro, positivo, par:\n");
    scanf("%d", &n);

//sair do programa caso for �mpar ou negativo
    if(n % 2 == 1 || n < 0)
       {printf("Valor inv�lido!\n\n");
        system("pause");}

//imprimindo todos n�meros pares at� o 0
    for(cont = n; n > 0; cont--)
       {n = n - 2;
        printf("%d\n", n);}

    system("pause");

}
