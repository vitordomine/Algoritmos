#include <stdio.h>

int main()
{
    int numero,sos;
    printf("<---------Número impar ou par--------->\n\n");
    printf("Escreva um número: ");
    scanf("%d",&numero);
    
    sos = numero % 2;
    if(!sos){
        printf("\nÉ PAR!");
    }    
    else{
        printf("\nÉ IMPAR!");
    }
    
    return 0;
}
