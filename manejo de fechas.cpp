/**
* Escriba un programa en c++, usando funciones, que solicite al usuario que ingrese una fecha y calcule el d�a correspondiente del a�o. 
  Ejemplo, si se ingresa la fecha 31 12 1998, el n�mero que se visualizar� ser� 365.
*/

#include <iostream>
using namespace std;
int diasMeses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int calcularDiaAnio(int dia, int mes, int anio);

int main() {
	int dia, mes, anio;
	cout << "Calcular el d�a del a�o, dada una fecha. \n\n";
	cout << "Ingrese el d�a del mes (Numero): ";
	cin >> dia;
	cout << "Ingrese el mes del a�o (Numero): ";
	cin >> mes;
	cout << "Ingrese el a�o: ";
	cin >> anio;
	cout << endl;
	
	if (anio%4==0)
		diasMeses[1] = 29;
	
	if (mes < 13)
		if (diasMeses[mes-1] > dia)
			cout << "El d�a del a�o es: " <<  calcularDiaAnio(dia, mes-1, anio);
		else 
			cout << "No existe ese d�a para el mes." << mes;
	else 
		cout << "NO existe ese mes.";
	
	return 0;
}

int calcularDiaAnio(int dia, int mes, int anio){
	int dias = 0;
	
	for (int i = 0; i < mes; i++){
		dias += diasMeses[i];
	}
	return dias + dia;
}

