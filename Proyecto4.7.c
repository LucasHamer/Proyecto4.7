#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N1,N2,N3;

    printf("Ingrese 3 valores reales, mayores que cero.\n");
    printf("Primer valor: ");
    scanf("%d",&N1);
    printf("Segundo valor: ");
    scanf("%d",&N2);
    printf("Tercer valor: ");
    scanf("%d",&N3);

    if(N1+N2>N3 && N1+N3>N2 && N2+N3>N1)
    {
        printf("Forma un triangulo");
    }
    else//(N1+N2<N3 && N1+N3<N2 && N2+N3<N1)
    {
        printf("No forma un triangulo");
    }

    return 0;
}
