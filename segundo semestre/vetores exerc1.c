#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

    int contador, i, vet[10], vetImpar[10];

    for(i = 0; i < 10; i++)
    {

        printf("\nDigite o n�mero: ");
        scanf("%d", &vet[i]);

        if(vet[i] % 2 != 0)
        {
            vetImpar[contador] = vet[1];
            contador++;
        }
    }

    printf("\n\t Os n�meros impares s�o: \n");

    for(i = 0; i < contador; i++)
    {
        printf("\n%d", vetImpar[i]);
    }

}
