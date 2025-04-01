#include <stdio.h>
int main()
{
  int A[10]={10,10,10,8,6,6,4,4,4,4};
  int num=0;
  for(int i;i<10;i++) 
  {
    printf(" %d ",A[i]);
  }
  for(int i=0;i<10;i++) 
  {
    for(int j=0;j<10;j++)    
    {
      if(A[i]==A[j]&&A[j]!=0) 
      {
        num++;
        if(num>1) A[j]=0;
      }
    } 
    if(num>1)printf("\nO numero %d se repete %d ",A[i],num);
    num=0;
  }
  return 0;
}
