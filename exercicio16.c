
#include <stdio.h>

int main()
{
    int valor1,valor2;
    printf("<---------Maior Número---------->\n\n");
    printf("Escreva o Primeiro Número: ");
    scanf("%d",&valor1);
    printf("\nEscreva o Segundo Número: ");
    scanf("%d",&valor2);
    
    if(valor1 > valor2){
        printf("O Maior Número é: %d",valor1);
    }
    else printf("O Maior Número é: %d",valor2);

    return 0;
}
