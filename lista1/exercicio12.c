#include <stdio.h>

int main()
{
    int base,altura,area;
    printf("----------Calcular a área de Retangulo----------\n");
    printf("Escreva a Base e a Altura de retangulo (Exemplo \"5 5\"): \n");
    scanf("%d %d",&base,&altura );
    area = base * altura;
    printf("A Área do Retangulo é igual á: %d",area);
    return 0;
}