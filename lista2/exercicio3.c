
#include <stdio.h>

int main()
{
    printf("------------Média de 4 Números------------\n\n");
    int num1,num2,num3,num4,resul;
    printf("Escreva 4 Números Inteiros Positivos  \"Exemplo: 2 5 15 13\" : ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    if(num1 >= 0 && num2 >= 0 && num3 >= 0 && num4 >= 0)
    {
        resul = (num1+num2+num3+num4)/4;
        printf("\nResultado da Média é: %d",resul);
    }
    else
    {
        printf("\nApenas Números Positivos");
    }
    return 0;
}