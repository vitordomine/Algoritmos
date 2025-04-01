#include <stdio.h>
int main()
{
  int num,cont=0,aux,dez=1;
  scanf("%d",&num);
  aux=num;
  {
    for(int i;aux>0;i++)
    {
      aux=aux/10;
      cont++;
    }
    for(int i=0;i<cont;i++)
    {
      printf("%d",(num%(10*dez))/(1*dez));
      dez=dez*10;
    }
  }
  return 0;
}
