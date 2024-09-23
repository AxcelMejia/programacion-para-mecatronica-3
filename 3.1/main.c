#include <stdio.h>

/* Nómina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la
nómina de la universidad.

I: variable de tipo entero.
SAL y NOM: variables de tipo real. */

void main (void) /*Es la función principal de un programa en C. */
{
    int I; /* es para crear una variable llamda I para guardar un numero entero. */
    float SAL, NOM; /* es para crear dos variables SAL y NOM que pueden guardar numeros con decimales. */
    NOM = 0; /* asignando el valor 0 a la variable NOM. */
    for (I=1; I<=15; I++) /* repite un bloque de codigo varias veces. */
    {
        printf("\Ingrese el salario del profesor%d:\t", I); /* se utilaza para mostar texto o valores en la pantalla. */
        scanf("%f", &SAL); /* se usa para leer datos del teclado y almacenarlos en variables. */
        NOM = NOM + SAL; /* asigna el valor NOM y SAL a la variable */
    }
    printf("\nEl total de la nomina es: %2f", NOM); /* se utilaza para mostar texto o valores en la pantalla. */

}
