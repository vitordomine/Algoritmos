#include <stdio.h>
int main()
{
  int A[10]={3,10,2,8,6,6,1,4,4,4};
  int B[10]={1,12,2,5,7,6,2,4,3,5};
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
   printf("\n\n");
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
    {
      if(A[i]==B[j])
      {
        
        if(B[j]!=0) printf(" %d ",B[j]);
        B[j]=0;
        
      }
    }
  }
  return 0;
}
