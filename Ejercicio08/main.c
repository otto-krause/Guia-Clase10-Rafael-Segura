#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num2;
    int mult;
    int i=1;
    int suma;
    printf("ingrese dos numeros\n");
    scanf("%d",&num);
    scanf("%d",&num2);
    while (5*i<num)
       i++;

    mult=5*i;

    while (mult<num2){
        if(mult!=num){
            suma=suma+mult;
            printf(" %d ",mult);
        }

        mult=mult+5;


    }
    printf("\n La suma es %d ",suma);
    system("pause");
}
