#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "");

//definindo vari�veis
float sf, vc, cf, tv, salario;

//Definindo sal�rio fixo
printf("\tQual o sal�rio fixo mensal do vendedor?\nR$");
scanf("%f", &sf);

//quantidade de carros vendidos
printf("\tQuantos carros o colaborador vendeu?\n-> ");
scanf("%f", &vc);

//comiss�o fixa
printf("\tQual a comiss�o fixa para cada carro vendido?\nR$");
scanf("%f", &cf);

//quanto vendeu
printf("\tQual o valor total de suas vendas?\nR$");
scanf("%f", &tv);

//sal�rio
salario = sf + (vc * cf) + tv * 0.05;

//exibindo sal�rio
printf("O sal�rio mensal do vendedor �: R$%.2f\n\n", salario);

system("pause");
system("cls");
}







