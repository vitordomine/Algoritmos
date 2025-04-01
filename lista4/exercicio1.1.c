
#include <stdio.h>
int main()  
{
    int idade=0,soma=0;
    printf("Quantidade de Idades que quiser, e aperte 0 para receber o resultado: ");
    do
    {
      scanf("%d",&idade);
      soma = soma + idade;  
    } while (idade!=0);
        printf("\nSoma das pessoas Maiores de idade: %d",soma);
    return 0;
}