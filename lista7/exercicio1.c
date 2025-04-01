#include <stdio.h>
#include <locale.h>

int main()
{
  int M[5][5]=
  {
  {1,2,3,4,5},
  {6,7,8,9,10},
  {11,12,13,14,15},
  {16,17,18,19,20},
  {21,22,23,24,25}
  };
  int somal4=0,somac2=0,somadp=0,somat=0;
  for(int i=0;i<5;i++)
  {
    somal4+=M[3][i];
	  somadp+=M[i][i];
    somac2+=M[i][1];
    for(int j=0;j<5;j++)
    {
      somat+=M[i][j];
    }
  }
  printf("\n Soma da linha 4: %d \n Soma da coluna 2: %d \n Soma da diagonal princial: %d\n Soma da matrix: %d",somal4,somac2,somadp,somat);
}

