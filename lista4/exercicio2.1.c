
#include <stdio.h>
int main()  
{
  int idade=0,soma=0,p=0;
  float media=0;
  printf("Quantidade de Idades que quiser, e aperte 0 para receber o resultado: ");
  do
  {
    scanf("%d",&idade);
    if(idade > 17) 
    {
      soma = soma + idade;  
    }
    if(idade < 18 && idade > 0) 
    {
      p++;
      media = (idade+media);
    }
  }while (idade!=0);
    media = media / p;
    printf("\nSoma das pessoas Maiores de idade: %d\n\nMedia da Idade das pessoas Menores de idade: %f",soma,media);
    return 0;
}