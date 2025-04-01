#include <stdio.h>
int main()
{
  int num,cont=0,aux,dez=1,reverse=0,numero=0;
  printf("Escreva um numero inteiro: ")
  scanf("%d",&num);
  aux=num;
  for(int i;aux>0;i++)
  {
    aux=aux/10;
    cont++;
  }
  for(int i=0;i<cont;i++)
  {
    reverse = (num%(10*dez))/(1*dez);
    dez=dez*10;
    numero = (numero + reverse)*10; 
  }
  numero = numero/10;   
  if(num==numero) printf("o numero é um palíndromo");
  else printf("o numero não é um palíndromo");
  return 0;
}
