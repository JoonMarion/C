#include <stdio.h>
#include <locale.h>

int menor(int a, int b)
{
    int menorNum;

    if(a > b)
     {b = menorNum;
      return b;}
    else
     {return a;}

}

int main()
{
    setlocale(LC_ALL, "");

    int a = 0, b = 0, anao = 0;

    printf("Selecione dois n�meros para acharmos o menor entre eles:\n");

    scanf("%d %d", &a, &b);

    anao = menor(a, b);

    printf("\nO menor n�mero �: %d\n\n", anao);

    return 0;
}


