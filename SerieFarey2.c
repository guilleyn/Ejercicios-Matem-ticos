#include <stdio.h>
/* Sucesión de Farey resuelta en el lenguaje C utilizando la propiedad "Vecinos de Farey"
  Más información sobre dicha propiedad en: https://es.wikipedia.org/wiki/Sucesi%C3%B3n_de_Farey#Vecinos_de_Farey
*/
int main(){
    int n,x1=0,y1=1,x2=1,y2,num,den;
    printf( "Introduzca un numero para la secuencia: " );
	scanf( "%d", &n );
    y2=n;
    num=1,den=n;
printf("%d/%d, %d/%d",x1,y1,x2,y2);
while (den!=1)
{
    num=((y1+n)/(y2))*x2-x1;
    den=((y1+n)/(y2))*y2-y1;
    printf(", %d/%d",num,den);
    x1=x2;x2=num;y1=y2;y2=den;
}
printf("\n");

}
