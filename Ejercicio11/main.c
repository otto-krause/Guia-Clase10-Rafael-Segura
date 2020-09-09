#include <stdio.h>
    #include <stdlib.h>

int main()
{
    int divsor=0, res=0, cont=0, dividendo=0;

    printf("Ingrese dos numeros\n");
    scanf("%d", &dividendo);
    scanf("%d", &divsor);

    res=dividendo;

    while ( res>=divsor ){
        res=res-divsor;
        cont++;
    }
    printf("El resto es %d", res);
    system("pause");
}
