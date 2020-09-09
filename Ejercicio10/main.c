#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i=0, dividendo=0, divisor=0;
    float result;
    printf("Ingrese dos numeros\n");
    scanf("%d",&dividendo);
    scanf("%d",&divisor);

    do{
        i++;
    }while(divisor*i<=dividendo);
    result=i-1;
    do{
        result=result+0.001;
    }while(divisor*result<=dividendo);

    printf("%d / %d = %.2f",dividendo,divisor,result);







    system("pause");
}
