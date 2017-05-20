#include "header.h"

int main()
{
   Eempleado unempleado;

   cargarempleado(&unempleado);

printf("legajo%d\n",unempleado.legajo);
printf("lnombre :%s\n",unempleado.nombre);
printf("lsueldo%f\n",unempleado.sueldo);
printf("año%d\n",unempleado.Fecha.anio);
printf("mes %d\n",unempleado.Fecha.mes);
printf("dia%d\n",unempleado.Fecha.dia);

}
void cargarempleado(Eempleado* unempleado)
{
printf("ingrese legajo:\n");
scanf("%d", &unempleado->legajo);
printf("ingrese nombre:\n");
fflush(stdin);
gets(unempleado->nombre);
printf("ingrese sueldo:\n");
scanf("%f",& unempleado->sueldo);
printf("ingrese dia:\n");
scanf("%d",&unempleado->Fecha.dia);
printf("ingrese mes:\n");
scanf("%d",&unempleado->Fecha.mes);
printf("ingrese anio:\n");
scanf("%d",&unempleado->Fecha.anio);


}
