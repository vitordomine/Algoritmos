#include <stdio.h>
#include <locale.h>

int main()
{
  int A[20];
  int B[20];
  int j=4;
  for(int i=0;i<20;i++)
  {
    j++;
    A[i]=j;
    printf("%d ",A[i]);
  }
  printf("\n\nDobro\n\n");
  for(int i=0;i<20;i++)
  {
    B[i]=A[i]*2;
    printf("%d ",B[i]);
  }

  return 0;
}