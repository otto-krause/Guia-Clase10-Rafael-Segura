#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact=0,cant=0,precu=0,nproduct=0, vtot=0;
    int mproductv=0, mimportev=0; //MAYOR VENDIDO

    do{
    printf("Ingrese el numero de factura ");
    scanf("%d",&fact);
    if(fact<999){
        printf("Ingrese la cantidad de productos ");
    scanf("%d",&cant);
    printf("Ingrese el precio unitario ");
    scanf("%d",&precu);
    printf("Ingrese el numero de producto ");
    scanf("%d",&nproduct);
    }

    vtot=precu*cant;
    if(vtot>mimportev)
        mimportev=vtot;

    if(cant>mproductv)
        mproductv=nproduct;
    if(fact<999)
        printf("Siguiente Factura:\n");
    }while (fact<999);

    printf("\n El mayor importe vendido fue %d ",mimportev);
	printf("\n El producto mas vendido fue %d ",mproductv);



    system("pause");
}
