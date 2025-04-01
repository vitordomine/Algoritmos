#include <stdio.h>
int main()  
{
    int num=0,numero=0;
    printf("Digite um numero natural: ");
    scanf("%d",&num);
    do
    {
      printf("\n %d",num%2);   
      num=num/2;
    }while (num!=0);
    printf("\n ^");
  return 0;
}