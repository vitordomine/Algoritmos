#include <stdio.h>

int main()
{
    float A1,A2,B1,B2;
    
    A1 = (4.0 / 2.0) + (2.0 / 4.0);
    A2 = 4.0 / 2.0 + 2.0 / 4.0;
    B1 = (4.0 + 2.0) * 2.0 - 4.0;
    B2 = 4.0 + 2.0 * 2.0 - 4.0;
    
    printf("Caso A1: %.2f",A1);
    printf("\nCaso A2: %.2f",A2);
    printf("\nCaso B1: %.1f",B1);
    printf("\nCaso B2: %.1f",B2);
    return 0;
}

/*Resultados
Caso A1: 2.5
Caso A2: 2.5
Caso B1: 8.0
Caso B2: 4.0
*/