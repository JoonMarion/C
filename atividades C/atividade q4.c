#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

//definindo vari�veis
float pao = 0.25, broa = 1.50, resultado;
int p = 0, b = 0;

//nome
printf("           [ RENDA  DI�RIA  DA ]\n");
printf("           [  PADARIA HOTP�O   ]\n");
printf("           [-------------------]\n");
printf("           [ ECONOMIA/POUPAN�A ]\n\n");

//qual a venda de hoje?
printf("Quantos p�es a padaria Hotp�o vendeu hoje?\n");
scanf("%d", &p);
printf("E quantas broas?\n");
scanf("%d", &b);

//calculo da renda di�ria
resultado = pao * p + broa * b;

//mostrando o total
printf("\nO total arrecadado no dia foi de: R$%.2f\n", resultado);

//calculando a poupan�a
resultado = resultado * 0.1;

//mostrando a poupan�a
printf("O valor destinado a poupan�a � de: R$%.2f\n\n", resultado);

system("pause");

}

