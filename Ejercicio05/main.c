#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed long int dni=0;
    int nacim=0, men=0;
    int hom=0, muj=0, m30=0, tot=1;		//CONTADORES
    float porc=0;
    char sexo;


do{

    printf("Persona: %d\n",tot);

    printf("Ingrese su DNI\n");
    scanf("%li", &dni);
    if (dni>0){
        printf("Ingrese su sexo -Masc o Fem-\n");
        scanf("%s", &sexo);
        printf("Ingrese su a%co de nacimiento\n",164);
        scanf("%d", &nacim);
    }

    if (2020-nacim<18){
         men++;
    }

    porc=men*100/tot;

    if (dni<30000000 && dni>0){
        m30++;
    }

    if (sexo=='m' || sexo=='M'){
        hom++;
    }
    if (sexo=='f' || sexo=='F'){
        muj++;
    }

    tot++;
    }while (dni>0);

    printf("Se ingresaron un total de %d mujeres y %d hombres \n", muj,hom);
    printf("Un %d %c son menores de edad\n",porc, 37);
    printf("%d personas tienen un DNI inferior a 30 millones",m30);

    system("pause");
}

