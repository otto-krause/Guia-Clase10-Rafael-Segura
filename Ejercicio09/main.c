#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, num=0, num2=0;
    int product=0;
    printf("Ingrese dos numeros\n");
    scanf("%d",&num);
    scanf("%d",&num2);
    while (i!=num2){
        product=product+num;
        i++;
    }
    printf("%d",product);

    system("pause");
}
