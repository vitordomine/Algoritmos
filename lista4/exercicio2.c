#include<stdio.h>
int main()
{
  int num=0;
  float soma=1;
  scanf("%d",&num);
  for(float i=2;i<=num && num>0;i++)
  {
    soma=soma + (i+10);
    printf("\n %f %1.f",soma, i);
  }
  return 0;
}