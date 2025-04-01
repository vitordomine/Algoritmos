#include <stdio.h>
#include <locale.h>

int main()
{
  int vet[6]={2,3,5,10,16,15};
  int cont_par;
  int cont_imp;
  for(int i;i<6;i++)
  {
    if(vet[i]%2==0)
    {
      cont_par++;
      printf("\n%d é par",vet[i]);
    }
  }
  printf("\nPossui %d números pares\n",cont_par);
  for(int i;i<6;i++)
  {
    if(vet[i]%2!=0)
    {
      cont_imp++;
      printf("\n%d é impar",vet[i]);
    }
  }
  printf("\nPossui %d números impar\n",cont_imp);
  return 0;
}