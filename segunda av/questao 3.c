#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "");

float pl;
int p;

//tabela
printf("[C�digo de origem]  [Proced�ncia]  [%%Imposto]\n");
printf("         1               Sul           11%%\n");
printf("         2              Norte          13%%\n");
printf("         3             Nordeste         9%%\n");
printf("         4           Centro-Oeste      12%%\n");

//pre�o do produto
printf("\nQual o valor do produto?\n");
scanf("%f", &pl);

//proced�ncia
printf("Informe a proced�ncia do produto de acordo com a tabela:\n");
scanf("%d", &p);

switch(p)
{
case 1:
printf("\nO pre�o final do produto �: R$%.2f.\n\n", pl * 1.11);
break;

case 2:
printf("\nO pre�o final do produto �: R$%.2f.\n\n", pl * 1.13);
break;

case 3:
printf("\nO pre�o final do produto �: R$%.2f.\n\n", pl * 1.09);
break;

case 4:
printf("\nO pre�o final do produto �: R$%.2f.\n\n", pl * 1.12);
break;

default:
printf("\nOp��o inv�lida!\n\n");
break;
}

system("pause");
system("cls");
}
