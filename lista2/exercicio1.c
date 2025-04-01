
#include <stdio.h>

int main()
{
    float decimal;
    char letra;
    int num;
    printf("----------Printf e Scanf----------\n");
    printf("\nEscreva um Número decimal: \n");
    scanf("%f", &decimal);
    
    printf("\nEscreva uma Letra: ");
    scanf(" %c", &letra);// sempre um espaço antes do %c
    
    printf("\nEscreva um Número Inteiro: ");
    scanf("%d", &num);
    
    printf("--------------------------------------------------------------------------");
    printf("\nNúmero Decimal: %f\n\nLetra: %c\n\nNúmero Inteiro: %d",decimal,letra,num);
    return 0;
}