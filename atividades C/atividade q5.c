#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

//definindo vari�veis
float v = 12, k = 0, resultado;

//sauda��es
printf("     [  Seja bem-vindo ao   ]\n");
printf("     [restaurante Bem-B�o!!!]\n\n");

//card�pio
printf("      >>> R$12,00 por kg <<<\n\n");

//inser��o do valor
printf("Qual o peso do prato em quilogramas?\n");
scanf("%f", &k);

//pre�o
resultado = v * k;

//aparecendo valor na tela
printf("O valor do seu prato �: R$%.2f\n\n", resultado);

system("pause");

}
