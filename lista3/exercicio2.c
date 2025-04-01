
#include <stdio.h>

int main()
{
    int num,peso;
    printf("---------------Doar Sangue---------------\n\n");
    printf("Escreva sua Idade: ");
    scanf("%d",&num);
    printf("\nEscreva seu Peso: ");
    scanf("%d",&peso);
    printf("\n-----------------------------------------\n");
    if((num > 17 && num < 70) && peso > 49)
    {
      printf("\nVocê pode doar sangue");
    }
    else
    {
      printf("\nVocê não pode doar sangue");
    }

    return 0;
}
