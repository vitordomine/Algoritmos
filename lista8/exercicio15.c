//matriz 3x3

#include <stdio.h>

int main() {
  int M[3][3] = {
        {4, 3, 2},
        {7, 5, 1},
        {6, 8, 9}
                };
  int mul = 1;
  int soma = 0,sub=0;
  int pos1=0,pos2=0,pass=0;
  for (int i=0; i<3; i++)
  {
    for (int j=0; j<3; j++) 
    {
      mul*=M[pos1][pos2];
      pos1++;
      pos2++;
      if(pos1>2)pos1=0;
      if(pos2>2)pos2=0;
    }
    soma+=mul;
    pos1=0;
    pos2=0;
    pass++;
    pos2 = pass + pos2;
    mul=1;
  }
  pos1=0;
  pos2=2;
  pass=0;
  for (int i=0; i<3; i++)
  {
    for (int j=0; j<3; j++) 
    {
      mul*=M[pos1][pos2];
      pos1++;
      pos2+=2;
      if(pos2==3)pos2=0;
      if(pos2==4)pos2=1;
    }
    sub+=mul;
    pos1=0;
    pos2=2;
    pass++;
    pos2 = pos2 - pass;
    mul=1;
  }    
  printf("O determinante da matriz é: %d\n", soma-sub);
  return 0;
}
