#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

//vari�veis
    float b, h, area;

//ordem para o usu�rio
    printf("Selecione a base e a altura, respectivamente, para calcular a �rea do tri�ngulo:\n");

//inserindo valor da base
    scanf("%f", &b);

//condi��o valor nulo
    if(b == 0)
    {printf("\nValor inv�lido!\n");
     system("pause");}

//inserindo valor da altura
    scanf("%f", &h);

//condi��o valor nulo
    if(h == 0)
    {printf("\nValor inv�lido!\n");
     system("pause");}

//c�lculo
     area = (b * h) / 2;

//resultado
     printf("\nA �rea do tri�ngulo �: %.2f\n\n", area);

}
