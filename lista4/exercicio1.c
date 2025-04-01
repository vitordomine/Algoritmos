#include<stdio.h>
int main()
{
  int num=0;
  float soma=0;
  scanf("%d",&num);
  for(float i=1;i<=num && num>0;i++)
  {
    soma=(1/i)+soma;
    printf("\n %f %1.f",soma, i);
  }
  return 0;
}