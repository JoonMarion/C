#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "");
int a;
float pt = 0;

//tabela
printf("     [n�mero]        [Planeta]        [Gravidade relativa]\n");
printf("         1            Merc�rio                 0,37\n");
printf("         2             V�nus                   0,88\n");
printf("         3             Marte                   0,38\n");
printf("         4            J�piter                  2,64\n");
printf("         5            Saturno                  1,15\n");
printf("         6             Urano                   1,17\n\n");

printf("Para calcular seu peso em algum desses planetas, informe:\n\n");

printf("Qual n�mero do planeta que voc� deseja calcular seu peso?\n");
scanf("%d", &a);

switch(a)

{
case 1:
printf("\nVoc� selecionou Merc�rio!\n");
break;

case 2:
printf("\nVoc� selecionou V�nus!\n");
break;

case 3:
printf("\nVoc� selecionou Marte!\n");
break;

case 4:
printf("\nVoc� selecionou J�piter!\n");
break;

case 5:
printf("\nVoc� selecionou Saturno!\n");
break;

case 6:
printf("\nVoc� selecionou Urano!\n");
break;

default:
printf("\nComando inv�lido!\n\n\n");
break;

}

printf("\nQual o seu peso na Terra?\n");
scanf("%f", &pt);

if(a == 1)
{
printf("\nO seu peso em Merc�rio �: %.2f\n\n", (pt / 10) * 0.37);
}
else if(a == 2)
{
printf("\nO seu peso em V�nus �: %.2f\n\n", (pt / 10) * 0.88);
}
else if(a == 3)
{
printf("\nO seu peso em Marte �: %.2f\n\n", (pt / 10) * 0.38);
}
else if(a == 4)
{
printf("\nO seu peso em J�piter �: %.2f\n\n", (pt / 10) * 2.64);
}
else if(a == 5)
{
printf("\nO seu peso em Saturno �: %.2f\n\n", (pt / 10) * 1.15);
}
else if(a == 6)
{
printf("\nO seu peso em Urano �: %.2f\n\n", (pt / 10) * 1,17);
}
else if(a < 1 || a > 6)
{
printf("Comando inv�lido!\n\n");
}
system("pause");
system("cls");

}
