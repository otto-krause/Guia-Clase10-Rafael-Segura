#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long fact=1;
    int i=0, num;
    printf("Ingrese un numero ");
    scanf("%d", &num);
    if (num>0){
        for (i=num;i>1;i--) {
        fact=fact*i;
        }
    printf("El factorial de %d es  %llu", num, fact);
    }
    system("pause");
}
