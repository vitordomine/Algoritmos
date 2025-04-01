#include <stdio.h>
int main()
{
    int num=0;
    int i=1;
    int resto=0; 
    int numeros=0; 
    int p=0; 
    int soma=0;
    printf("Digite um numero natural, para receber a soma dos primeiros números primos: ");
    scanf("%d",&numeros);
    do
    {
    num++;
    do 
    {
        i++;
        resto = num % i;
        if(resto==0)
        {
            num++;
            i=1;
        }
    }while(i<(num-1));
    i=1;
    p++;
    soma=soma+num;
    }while(p<(numeros+1));



    printf("\n\n a soma dos %d primeiros números primos naturais é %d",numeros,(soma+1)-num);
    return 0;
}
