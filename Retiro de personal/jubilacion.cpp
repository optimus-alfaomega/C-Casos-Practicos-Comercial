#include <iostream>
using namespace std;

/**
3. El IMSS requiere clasificara a las personas que se jubilaron en el a�o 1997. Existen tres 
tipos de jubilaciones: por edad, por antigudad joven y por antiguedad adulta. 

- Las personas adscritas a la jubilacion por edad deben tener 60 a�os o m�s y una antiguedad en su empleo de menos de 25 a�os.
- Las personas adscritras a la jubilacion por antiguedad joven deben tener menos de 60 a�os y una antigueadad en su empleo de 25 a�os o m�s.
- Las personas adscritas a la jubilaci�n por antiguedad adulta deben tener 60 a�os o m�s y una antiguedad
en su empleo de 25 a�os o m�s.

Determinar en qu� tipo de jubilaci�n quedar� adscrita la persona
*/

int main(int argc, char *argv[]) {
	
	float edad, antiguedad;
	
	cout << "Ingrese la edad de la persona: ";
	cin >> edad;
	cout << "Ingrese la antiguedad de la persona en la empresa: ";
	cin >> antiguedad;
	cout << endl;
	
	if (edad >= 60 && antiguedad < 25){
		cout << "La persona queda adscrita a 'Jubilaci�n por edad'";
	} else if (edad < 60 && antiguedad >= 25){
		cout << "La persona queda adscrita a 'Jubilaci�n por antiguedad joven'";
	} else if (edad >= 60 && antiguedad >= 25){
		cout << "La persona queda adscrita a 'Jubilaci�n por antiguedad Adulta'";
	} else {
		cout << "La persona no cumple con lo requisitos para quedar adscrita";
	}
	
	
	return 0;
}

