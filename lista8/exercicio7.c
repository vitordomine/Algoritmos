#include <stdio.h>
int main()
{
  int A[10]={10,9,8,7,6,5,4,3,2,1};
  int x,num=1;
  for(int i;i<10;i++) 
  {
    printf(" %d ",A[i]);
  }
  scanf("%d",&x);
  for(int i;i<10;i++) 
  {
    if(A[i]==x) 
    {
      printf("o numero %d se encontra na posição %d do vetor",x,i);
      num=0;
    }
  }
  if(num) printf("Esse numero não existe no vetor");
  return 0;
}
