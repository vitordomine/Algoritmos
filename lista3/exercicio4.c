
#include <stdio.h>

int main()
{
    int idade;
    char sexo;
    printf("--------------------Processo de Alistamento Militar--------------------\n\n");
    printf("Escreva sua idade: ");
    scanf("%d",&idade);
    printf("\nEscolha seu sexo\n");
    printf("Escreva M para Masculino e F para Feminino: ");
    scanf(" %c",&sexo);
    
    if((idade >=18 ) && (sexo == 'M'))
    {
      printf("\nVocê precisa passar pelo processo de alistamento militar");
    }
    else
    {
      printf("\nVocê não precisa passar pelo processo de alistamento militar");
    }

    return 0;
}
