#include<stdio.h>
int main()
{
  int num;
  for(int i=1;i<=10;i++)
  {
    printf("\nescreva o %dº numero: ",i);
    scanf("%d",&num);
    if(num > 25) printf("\n o numero %d é maior que 25",num);
	if(num < 85) printf("\n o numero %d é menor que 85",num);
  }

  return 0;
}