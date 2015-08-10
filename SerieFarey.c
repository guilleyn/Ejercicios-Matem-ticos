 #include <stdio.h>
/* Ejercicio en C para obtener la sucesión de Farey de un determinado N(entero). 
Más información sobre la misma en: https://es.wikipedia.org/wiki/Sucesión_de_Farey
El ejercicio se realizó sin utilizar arrays, estructuras u otros tipos de arreglos a petición del enunciado.
*/
 int main(){
    int n,numerador=0,denominador=1,aux1=1,aux2=0,aux3,temp;
    printf("Introduzca un numero: ");
    scanf("%d",&n);
    do{
        printf("\n%d/%d" ,numerador,denominador);
        aux3=(n-aux2)/denominador;
        aux2+=(aux3*denominador);
        aux1+=(aux3*numerador);
        /* Intercambio de variables entre las auxiliares con el numerador y denominador respectivamente*/
        temp=aux1;aux1=numerador;numerador=temp;
        temp=aux2;aux2=denominador;denominador=temp;
        /* Fin intercambio*/
        aux1=-aux1;
        aux2=-aux2;
    }while(denominador>1);
   printf("\n1/1");
 }
  
 
