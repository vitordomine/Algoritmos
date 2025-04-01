#include <stdio.h>
#include <locale.h>
int main()
{
  int p=2,prim=1;
  int mdc=1,x=0,y=0;
  printf("\nEscreva 2 numeros inteiros: ");
  scanf("%d %d",&x,&y);
  while((x!=1)||(y!=1))
  {
    for(int i=p-1;i!=1;i--)
    {
      if((p%i)==0)
      {
        prim=0;
        break;
      }
    }
    if(prim)
    {
      while((x%p==0)||(y%p==0))
      {
        if((x%p==0)&&(y%p==0))mdc=mdc*p;
        if((x%p==0))x = x/p;
        if(y%p==0)y = y/p;
      }
    }
    prim=1;
    p++;            
  }
  printf("o MDC é %d",mdc);
  return 0;
}