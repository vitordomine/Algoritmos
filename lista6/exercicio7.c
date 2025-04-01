#include <stdio.h>
#include <locale.h>

int main()
{
  float A[6]={2.3,4.1,6.1,8.1,10.21,12.3};
  float B[6]={3.2,6.7,9.2,12.2,19.12,21.5};
  for(int i=0;i<6;i++)
  {
  A[i]=A[i]+B[i];
  printf("\n Posição %d é igual a %f",i,A[i]);
  }
  return 0;
}