#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
//acento
    setlocale(LC_ALL, "");

//vari�veis
    float c, f;

//comunica��o com o usu�rio
    printf("Insira no programa uma temperatura em graus Celsius,\npara tranformarmos em graus Fahrenheit:\n");
    scanf("%f", &c);

//convers�o
    f = c * (9.0 / 5.0) + 32.0;

//resultado

    printf("%.2f graus celsius � o mesmo que %.2f graus Fahrenheit\n\n", c, f);

    system("PAUSE");

}
