#include <stdio.h>
#include <locale.h>

int main()
{
  int vet[10];
  int j=20;
  for(int i=0;i<10;i++)
  {
    j++;
    vet[i]=j;
    printf("\nPosição %d é %d",i, vet[i]);
  }
  return 0;
}