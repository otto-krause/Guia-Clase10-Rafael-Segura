#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Max=3;

    float tp=0, activ=0, prom[Max], promg=0;
    float mayorp=0, mayora=0; //MAYOR PROMEDIO
    int i=0, cont=0, aprob=0, nmenor=0; //CONTADORES

    for(i=0;i<Max;i++){
        printf("Alumno: %d\n",i+1);
        printf("Ingrese la nota del trabajo practico: ");
        scanf("%f",&tp);

        if (tp>5)
            aprob++;

        printf("%Ingrese las notas de actividades del alumno\n");

        cont=0;
        do{
            printf("Nota: ");
            scanf("%f",&activ);
            cont++;
            prom[i]=prom[i]+activ;
        } while (activ>=0);
        prom[i]=(prom[i]+tp)/cont;
        if (prom[i]>mayorp){
            mayorp=prom[i];
            mayora=i;
        }
        if(cont<=2){
            nmenor=cont;
        }
        system("cls");
    }
    system("cls");
    for(i=0;i<Max;i++){
        printf("Alumno %d:\n", i+1);
        printf("Promedio: %.1f\n", prom[i]);
        promg=promg+prom[i];
    }

    printf("El alumno con mayor promedio es el n°%d, con %.1f\n",mayora+1, mayorp);

    promg=promg/Max;
    printf("El promedio General del curso es %.1f\n",promg);

    printf("%d alumnos tienen 2 o menos notas ingresadas\n",nmenor);
    printf("%d alumnos tienen el TP aprobado\n",aprob);



    system("pause");
}
