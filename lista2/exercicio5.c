
#include <stdio.h>

int main()
{
    float p = 0,i,r,u;
    printf("------------Calcular a potência de um resistor------------\n\n");
    printf("Observação: Se não existir valor colocar = 0\n");
    printf("\n-------------------------------------------------\n");
    printf("\nEscreva o valor da corrente elétrica(I):");
    scanf("%f",&i);
    printf("\n\nEscreva o valor da tensão(U): ");
    scanf("%f",&u);
    printf("\n\nEscreva o valor da resistência(R): ");
    scanf("%f",&r);
    
    if(i == 0)
    {
      p = (u*u)/r;
      printf("\nO Resultado da Potencia é: %.3f",p);
    }
    else if(u ==0)
    {
      p =r*(i*i);
      printf("\nO Resultado da Potencia é: %.3f",p);
    }
    else
    {
      p = i*u;
      printf("\nO Resultado da Potencia é: %.3f",p);
    }
    return 0;
}