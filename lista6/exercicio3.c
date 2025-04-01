#include <stdio.h>
#include <locale.h>

int main()
{
  int lin[8]={1,2,3,4,5,6,7,8};
  int logi[10]={11,22,33,4,5,6,7,88,2,100};
  for(int i=0;i<8;i++)
  {
	 for(int j=0;j<10;j++)
	 {
	  if(lin[i]==logi[j])
	  {
	    printf("\nO número de matricula %d está nas duas materias",logi[j]);
	  }
	 }
  }

  return 0;
}