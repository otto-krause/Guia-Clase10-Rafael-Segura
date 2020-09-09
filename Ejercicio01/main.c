#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, h, aprov=0; //CONTADORES
    int nota;
    char nomb[20];
    char nombres[20][15];

    for(i=0;i<15;i++){
        nota=0;
        for(h=0;h<20;h++) //SACAR VALORES
            nomb[h]=' ';

        printf("Escriba el nombre del alumno: %d\n",i+1);
        scanf( "%s", &nomb );
        printf("Y su nota: ");
        scanf("%d",&nota);
        if(nota>=8){
            for(j=0;j<20;j++)
                nombres[j][aprov]=nomb[j];
            aprov++;
        }
    }
    printf("Los alumnos con una nota mayor a 8 son: \n");
    for(i=0;i<aprov;i++){
        for(j=0;j<20;j++)
            printf( "%c", nombres[j][i]);
    printf("\n");
    }
    system("pause");
}
