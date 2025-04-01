#include <stdio.h>
int main()
{
  int v[10]={10,9,8,7,6,5,4,3,2,1};
  int x=9,y=0,num=-1;
  for(int i=0;i<10;i++) 
  {
    printf(" %d ",num+=1);
  }
  printf("\n");
  for(int i=0;i<10;i++) 
  {
    printf(" %d ",v[i]);
  }
  printf("\nEscreva as posições para trocar(de 0 a %d): ",x);
  scanf("%d %d",&x,&y);
  num=v[y];
  v[y]=v[x];
  v[x]=num;
  num=-1;
  for(int i=0;i<10;i++) 
  {
    printf(" %d ",num+=1);
  }
  printf("\n");
  for(int i=0;i<10;i++) 
  {
    printf(" %d ",v[i]);
  }  
  return 0;
}
