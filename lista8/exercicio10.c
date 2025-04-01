#include <stdio.h>
int main()
{
  int A[10]={3,10,2,8,6,6,1,4,4,4};
  int menor = A[0];
  int maior = A[0];
  int num=0,pos;
  for(int i;i<10;i++) 
  {
    printf(" %d ",A[i]);
  }
    printf("\n");
  for(int i=0;i<10;i++) 
  {
    for(int j=0;j<10;j++)    
    {
      if(A[j]!=0) 
      {
        if(menor>A[j]) 
        {
          menor=A[j];
        }
        if(maior<A[j]) 
        {
          maior=A[j];
          pos=j;
        }
        
      }
    }
    printf(" %d ",maior);
    A[pos]=0;
    maior=menor;
  }
  return 0;
}
