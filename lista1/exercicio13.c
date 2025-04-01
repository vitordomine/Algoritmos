#include <stdio.h>

int main()
{
    int valor;
    printf("<---------Número Maior ou Menor que 10--------->\n\n");
    printf("Escreva um número: ");
    scanf("%d",&valor);
    
    if(valor > 10){
        printf("\nÉ MAIOR QUE 10!");
        }
        else{
            printf("\nNÃO É MAIOR QUE 10!");
        }
    
    return 0;
}
