#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
10. En un supermercado un cajero captura los precios de los articulos que los clientes compran e indica
a cada cliente cual es el monto de los que deben pagar. Al final del dia indica a su supervisor
cuanto fue lo que cobr� en total a todos clientes que pasaron por su caja.
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	float precio, total = 0;
	int clientes;
	
	printf("Ingrese la cantidad de clientes que debe registrar: ");
	scanf("%d", &clientes);
	printf("\n");
	
	for (int i = 1; i <= clientes; i++){
		printf("Ingrese el precio que debe pagar el cliente %d: ", i);
		scanf("%f", &precio);
		total += precio;
	}
	
	printf("\nSe vendieron art�culos a %d clientes.", clientes);
	printf("\nEl Total vendido en caja es de $%.2f", total);
	
	return 0;
}

