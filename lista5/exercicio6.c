#include <stdio.h>
#include <locale.h>

int main()
{
  int A[8];
  int mr;
  for(int i=0;i<8;i++)
  {
  printf("Posição %d: ",i); 
  scanf("%d",&A[i]);
  }
  mr=A[0];
  for(int i=0;i<8;i++)
  {
    if(A[i]>mr)
    {
      mr=A[i];
    }
  }
  printf("O maior numero é %d",mr);
  return 0;
}