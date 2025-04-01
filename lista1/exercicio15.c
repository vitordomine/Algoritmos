#include <stdio.h>

int main()
{
    int anoT,anoN,idade;
    printf("<---------Verificar Idade para votar--------->\n\n");
    printf("Escreva o ano atual e o ano do seu nacimesnto \"Exemplo 2024 2006\": ");
    scanf("%d %d",&anoT,&anoN);
    
    idade = anoT - anoN;
    
    if(idade >= 16/*16 anos facultativo e 18 obrigatorio*/){
        printf("\nVocê pode votar esse ano");
    }    
    else{
        printf("\nVocê não pode votar esse ano");
    }
    
    return 0;
}
