#include <stdio.h>
int main ()
{
	int fecha, edadc;
	printf ("Hola \n");
	printf ("Escriba el a�o en el que nacio: ");
	scanf  ("%d", fecha);
	edadc=2025-fecha;
	printf ("Si el a�o en que nacio es" " %d", fecha,"tiene" "%d", edadc,"a�os" );
}
