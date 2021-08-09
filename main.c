#include<stdio.h>

main ()
{

	float V[3], prom;

	printf("\t\tNutricion Animal, NASA");

	printf ("\n\tIntroducir la venta del vendedor 1: ");
	scanf ("%f",&V[0]);

	printf ( "\tIntroducir la venta del vendedor 2: ");
	scanf ("%f", &V[1]);

	printf ( "\tIntroducir la venta del vendedor 3: ");
	scanf ("%f", &V[2]);

	prom=(V[0]+V[1]+V[2])/3;

	printf ("\n\tEl promedio de las ventas diarias entre los 3 vendedores es: %f", prom);

	return 0;
}
