#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
 setlocale(LC_ALL, "");
//vari�veis vol�teis
int a, r = 1;
float cd;

//vari�veis fixas
float A = 2.19, G = 2.72;

while(r == 1){

//NOME
printf("    ###Selecione o combust�vel desejado###\n\n");
printf("\t1 - �lcool\t 2 - Gasolina\n");
printf("\tR$2,19/L   \t R$2,72/L\n");
scanf("%d", &a);

//selecionando combust�vel
switch(a)
{
case 1:
printf("\t>>>Voc� selecionou �lcool<<<\n\n");
break;

case 2:
printf("\t>>>Voc� selecionou Gasolina<<<\n\n");
    break;

default:
printf("\t>>>Comando inv�lido!<<<\n\n");
break;
}
//quantidade de combust�vel
printf("###Quanto de combust�vel voc� deseja em litros?###\n");
scanf("%f", &cd);

if(a == 1 && cd <= 20)
{printf("\nO valor final do seu pedido com desconto de 3%% foi de R$%.2f.\n", cd * 2.19 * 0.97);
}
else if(a == 1 && cd > 20)
{printf("\nO valor final do seu pedido com desconto de 5%% foi de R$%.2f.\n", cd * 2.19 * 0.95);
}
else if(a == 2 && cd <= 20)
{printf("\nO valor final do seu pedido com desconto de 4%% foi de R$%.2f.\n", cd * 2.19 * 0.96);
}
else if(a == 2 && cd > 20)
{printf("\nO valor final do seu pedido com desconto de 6%% foi de R$%.2f.\n", cd * 2.19 * 0.94);
}
printf("\n\n###Voc� deseja realizar outra compra?###");
printf("\n\n  *Digite:\n\n");
printf("    1 - sim");
printf("\n    2 - n�o\n");
scanf("%d", &r);

system("pause");
system("cls");
}
}
