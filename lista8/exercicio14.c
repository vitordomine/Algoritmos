#include <stdio.h>
int main()
{
  int M[3][3]=
  {
    {1,2,3},
    {1,2,3},
    {1,2,3}
  };
  int soma=0;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf(" %d ",M[i][j]);    
    }
    printf("\n");
  }
  for(int i=0;i<3;i++)
  {
    for(int j = 0;j<i;j++)
    {
      soma+=M[i][j];  
    }
  }
  printf("\n a soma abaixo da diagonal principal é %d",soma);
  return 0;    
}