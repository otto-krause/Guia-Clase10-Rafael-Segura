#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, an;
    int limitd;
    int verific=0;

    while(verific==0){
        printf("ingresar el dia\n");
        scanf("%d",&dia);
        printf("ingresar el mes\n");
        scanf("%d",&mes);
        printf("ingresar el a%co\n",164);
        scanf("%d",&an);

        switch (mes){
        case 1:
            limitd=31;
            break;
        case 2:
            if(an % 4 ==0 && an % 100 != 0 || an %400==0)
                limitd=29;
            else
                limitd=28;
            break;
        case 3:
            limitd=31;
            break;
        case 4:
            limitd=30;
            break;
        case 5:
            limitd=31;
            break;
        case 6:
            limitd=30;
            break;
        case 7:
            limitd=31;
            break;
        case 8:
            limitd=31;
            break;
        case 9:
            limitd=30;
            break;
        case 10:
            limitd=31;
            break;
        case 11:
            limitd=30;
            break;
        case 12:
            limitd=31;
            break;
        default:
            verific=1;
            break;
        }
        if (dia>limitd || dia<=0)
            verific=1;

        if (an<=0)
            verific=1;

        if(verific==0){
            printf("%d/%d/%d\n",dia,mes,an);
            printf("La Fecha es valida\n");
        }
        else
            printf("Fecha no valida\n");
    }
    system("pause");
}
