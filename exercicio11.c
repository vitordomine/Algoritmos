#include <stdio.h>

int main()
{
    int num1,resul;
    
    printf("----------------Antecessor de um numero----------------\n\n");
    printf("Escreva seu numero :");
    scanf("%d",&num1);
    
    resul= num1 - 1;
    printf("O Antecessor do seu numero é: %d",resul);
    return 0;
}