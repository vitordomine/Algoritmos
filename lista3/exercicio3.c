
#include <stdio.h>

int main()
{
    int dia,mes,ano;
    printf("----------------------Validar Data----------------------\n\n");
    printf("Escreva sua data de Nacimesnto\n\n");
    printf("Escreva o dia: ");
    scanf("%d",&dia);
    printf("\nEscreva o mês: ");
    scanf("%d",&mes); 
    printf("\nEscreva o ano: ");
    scanf("%d",&ano);
    
    if(((dia>=1)&&(dia<=31))&&((mes >= 1)&&(mes <= 12))&&((ano >= 1)&&(ano <= 2024)))
    {
      printf("\n---------------------------------------------------\n");
      printf("--------------------Data Válida--------------------");
      printf("\n---------------------------------------------------\n");
    }
    else
    {
      printf("\n---------------------------------------------------\n");
      printf("--------------------Data Inválida------------------");
      printf("\n---------------------------------------------------\n");
    }
    return 0;
}
