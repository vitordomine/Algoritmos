#include <stdio.h>
int main()
{
  int A[10]={3,10,2,8,6,6,1,4,4,4};
  int B[10]={1,12,2,5,7,6,2,1,3,5};
  int C[20];
  int num=0,cont=0;
  for(int i=0;i<10;i++) 
  {
    printf(" %d ",A[i]);
  }
  printf("\n");
  for(int i=0;i<10;i++) 
  {
    printf(" %d ",B[i]);
  }
  for(int i=0;i<10;i++) 
  {
    C[i]=A[i];
    C[i+10]=B[i];
  }
  for(int i=0;i<20;i++)
  {
    for(int j=0;j<20;j++)
    {
      if(C[i]==C[j])
      {
        cont++;
      }
      if(cont>1)
      {
        C[j]=0;
        cont=0;
      }
    }
    cont=0;
  }
  printf("\n\n");
  for(int i=0;i<20;i++) 
  {
    if(C[i]!=0)printf(" %d ",C[i]);
  }
  return 0;
}
