#include <stdio.h>
#include <locale.h>

int main()
{
  int vet[8]={10,9,20,10,16,15,10,12};
  for(int i;i<8;i++)
  {
    if(vet[i]%2==0)
    {
      printf("\n%d é multiplo de 2",vet[i]);
      if(vet[i]%2==0&&vet[i]%3==0)
      {
        printf("\n%d é multiplo de 2 e 3",vet[i]); 
      }
    }
    if(vet[i]%3==0)
    {
      printf("\n%d é multiplo de 3",vet[i]);
    }
  }
  return 0;
}