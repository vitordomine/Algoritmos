
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("----------------Maior e Menor----------------\n");
    printf("\nEscreva o Primeiro Número: ");
    scanf("%d",&num1);
    printf("\nEscreva o Segundo Número: ");
    scanf("%d",&num2);
    if(num1 > num2)
    {
        printf("\nO Número %d é o Maior\n",num1);
        printf("O Número %d é o Menor",num2);

    }
    else
    {
        printf("\nO Número %d é o Maior\n",num2);
        printf("O Número %d é o Menor",num1);
    }


    return 0;
}
