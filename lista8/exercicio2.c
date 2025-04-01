#include <stdio.h>
#include <locale.h>
int main()
{
  int num,cont=0;
  scanf("%d",&num);
  {
    for(int i;num>0;i++)
    {
      num=num/10;
      cont++;
    }
    printf("o numero tem %d algarismos ",cont);
  }
  return 0;
}