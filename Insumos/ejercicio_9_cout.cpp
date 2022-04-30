#include <iostream>
#include <stdlib.h>
using namespace std;

/**
Una empresa quiere hacer una compra de varias piezas de la misma clase a una f�brica de refreacciones.
La empresa, dependiendo del monto total de la compra, decidir� qu� hacer para pagar al fabricante.

Si el monto total de la compra excede de $500.000 la  empresa tendr� la capacidad de invertir de su propio dinero
en un 55% del monto de la compra, pedir prestado al banco un 30%  y el resto lo pagar� solicitando un cr�dito al fabricante.

Si el monto total de la compra no excede de $500.000 la empresa tendr� la capacidad de invertir de su propio dinero un 70%
y el restante 30% lo pagar� solicitando cr�dito al fabricante.

El fabricante cobra por concepto de inter�s un 20% sobre la cantidad que se pague a cr�dito.
*/

int main(){
	system("color 30");
	
	float total_compra, empresa= 0, banco = 0, fabrica = 0;
	
	cout << "Ingrese el total de la compra: ";
	cin >> total_compra;
	
	if (total_compra < 500000){
		cout << "\nLa compra no exede de 500000" << endl;
		empresa = total_compra * 0.7;
		fabrica  = total_compra  * 0.3;
	} else {
		cout << "\nLa compra exede de 500000" << endl;
		empresa = total_compra * 0.55;
		banco  = total_compra  * 0.3;
		fabrica = total_compra * 0.25;
	}
	
	cout << "Para pagar cada entidad aporta: " << endl;
	cout << "Empresa: $" << empresa << "\nFabrica: $" << fabrica << "\nBanco: $" << banco;
	cout << "\nC�mo la f�brica cobra 20% sobre el monto a credito, debes pagar " << (fabrica*1.2) << " al fabricante";
	
	return 0;
}
