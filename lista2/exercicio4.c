
#include <stdio.h>

int main()
{
    printf("------------Quadrado de um Número Par------------\n\n");
    int num,resul;
    printf("Escreva um numero Par : ");
    scanf("%d",&num);
    if((num % 2) == 0)
    {
        resul = num*num;
        printf("\nResultado do Quadrado do Número: %d",resul);
    }
    else
    {
        printf("\nApenas Números Pares");
    }
    return 0;
}