#include <stdio.h>
#include <locale.h>
int main()
{
  int aux,cont=0,num,posicao;
  scanf("%d",&num);
  aux=num;
  while(aux>0)
  {
    aux=aux/10;
    cont++;
  }
  while(posicao>cont)
  {
    scanf("%d",&posicao);
  }
  aux=cont-posicao;
  while(aux>0)
  {
    num = num/10;
    aux--;
  }
  printf("\n%d",num%10);
  return 0;
}