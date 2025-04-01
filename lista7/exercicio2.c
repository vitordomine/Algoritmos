#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
  int M[15][5];
  int cont=0;
  for(int i=0;i<15;i++)
  {
    for(int j=0;j<5;j++)
    {
      M[i][j]=rand() % 100;
      printf("%d ",M[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<15;i++)
  {
    for(int j=0;j<5;j++)
    {
        
      for(int k=0;k<15;k++)
      {
        for(int l=0;l<5;l++)
        {
          if(M[i][j]==M[k][l]) 
           {                  
           cont++;            
           if(cont>1) M[k][l]=0;
          }
        }
      }
      if(cont>1&&M[i][j]!=0)printf("\n%d %d",M[i][j],cont);
      cont=0;
    }
  }
  return 0;
}