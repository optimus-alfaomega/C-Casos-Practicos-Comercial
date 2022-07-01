# Taller Do While

1. Una compañía de seguros tiene contratados a n vendedores. Cada uno hace tres ventas a la semana. Su política de pagos es que un vendedor recibe un sueldo base, y un 10% extra por comisiones de sus ventas. El gerente de su compañía desea saber cuánto dinero obtendrá en la semana cada vendedor por concepto de comisiones por las tres ventas realizadas, y cuánto tomando en cuenta su sueldo base y sus comisiones.

2. En una empresa se requiere calcular el salario semanal de cada uno de los n obreros que laboran en ella. El salario se obtiene de la siguiente forma:
	- Si el obrero trabaja 40 horas o menos se le paga $20 por hora
	- Si trabaja más de 40 horas se le paga $20 por cada una de las primeras 40 horas y $25 por cada hora extra.

3. Determinar cuántos hombres y cuántas mujeres se encuentran en un grupo de n personas, suponiendo que los datos son extraidos alumno por alumno.

4. El departamento de Seguridad Pública y Tránsito del D.F. desea saber, de los n autos que entran a la ciudad de México, cuántos entran con calcomanía de cada color. Conociendo el último dígito de la placa de cada automóvil se puede determinar el color de la calcomanía utilizando la siguiente relación:

Dígito|Color
------|-----
1 ó 2 | Amarilla
3 ó 4 | Rosa
5 ó 6 | Roja
7 ó 8 | Verde
9 ó 0 | Azul


5. Obtener el promedio de calificaciones de un grupo de n alumnos.

6. Una persona desea invertir su dinero en un banco, el cual le otorga un 2% de interés. Cuál será la cantidad de dinero que ésta persona tendrá al cabo de un año si la ganancia de cada mes es reinvertida?

7. Calcular el promedio de edades de hombres, mujeres y de todo un grupo de alumnos.


8. Encontrar el menor valor de un conjunto de n números dados.


9. Encontrar el mayor valor de un conjunto de n números dados.


10. En un supermercado un cajero captura los precios de los artículos que los clientes compran e indica a cada cliente cuál es el monto de lo que deben pagar. Al final del día le indica a su supervisor cuánto fué lo que cobró en total a todos los clientes que pasaron por su caja.


11. Cinco miembros de un club contra la obesidad desean saber cuánto han bajado o subido de peso desde la última vez que se reunieron. Para eso de debe realizar un ritual de pesaje en donde cada uno de pesa en diez básculas distintas y así tener el promedio más exacto de su peso. Si existe diferencia positiva en ese promedio de peso y el peso de la última vez que se reunieron, significa que bajaron. Lo que el problema requiere es que por cada persona se imprima un letrero que diga: "ŚUBIÓ" ó "BAJÓ" y la cantidad de kilos que subió o bajó de peso.


12. Se desea obtener el promedio de g grupos que están en un mismo año escolar; siendo que cada grupo puede tener n alumnos que cada alumno puede llevar m materias y que en todas las materias se promedian tres calificaciones para obtener el promedio de la materia. Lo que se desea desplegar es el promedio de los grupos, el promedio  de cada grupo y el promedio de cada alumno.


13. La presión, volumen y temperatura de una masa de aire se relacionan por la fórmula:

`masa = (presion*volumen)/(0.37*(temperatura + 460))`

Calcular el promedio de la masa de aire de los neumáticos de n vehículos que están en compostura en un servicio de alineación y balanceo. Los vehículos pueden ser motocicletas o automóviles.


14. Determinar la cantidad semanal de dinero que recibirá cada uno de los n obreros de una empresa. Se sabe que cuando las horas que trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al doble de una hora normal, cuando no exceden de 8; cuando las horas extras exceden de 8 se pagan las primeras 8 al doble de lo que se paga una hora normal y el resto al triple.


15. En una granja se requiere saber alguna información para determinar el precio de venta por cada kilo de huevo. Es importante determinar el promedio de calidad de las n gallinas que hay en la granja. La calidad de cada gallina se obtiene según la fórmula.

`calidad = (peso de la gallina * altura de la gallina) / numero de huevos que pone`

Finalmente para fijar el precio del kilo de huevo, se toma como base la siguiente tabla.

PRECIO TOTAL DE CALIDAD | PESO POR KILO DEL HUEVO
------------------------|------------------------
Mayor o igual que 15 | 1.2 * promedio de calidad
Mayor que 8 y menor que 15 | 1.00 * promedio de calidad 
Menor o igual que 8 | 0.80 * promedio de calidad 


16. En la cámara de Diputados se levanta una encuesta con todos los integrantes con el fin de determinar el porcentaje de los n diputados que están a favor del Tratado de Libre Comercio, el porcentaje que está en contra y el porcentaje que se abstiene de votar.




# Taller 2 - Condicionales

1. Un hombre desea saber cuánto dinero se genera por concepto de intereses sobre la cantidad que tiene en inversión en el banco. El decidirá reinvertir los interese siempre y cuando estos excedan a $7000. Y en ese caso desea saber cuánto dinero tendrá finalmente en su cuenta.
	- [ejercicio 1 - cout](ejercicio_1_cout.cpp)
	- [ejercicio 1 - printf](ejercicio_1_printf.cpp)


2. Determinar si un alumno apruena o reprueba un curso, sabiendo que aprobará si su promedio de 3 calificaciones es mayor o igual a 3.0 y reprueba en caso contrario
	- [ejercicio 2 - cout](ejercicio_2_cout.cpp)
	- [ejercicio 2 - printf](ejercicio_2_printf.cpp)


3. En un almacen se hace un 20% de descuento a los clientes cuya compra supere los $1000 ¿Cuál será la cantidad que pagará la persona por su compra?
	- [ejercicio 3 - cout](ejercicio_3_cout.cpp)
	- [ejercicio 3 - printf](ejercicio_3_printf.cpp)


4. Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera.
- Si trabaja 40 horas o menos, se le paga $16 por hora.
- Si trabaja más de 40 horas, se le paga %16 por cada una de las primeras 40 horas y $20 por cada hora extra.
	- [ejercicio 4 - cout](ejercicio_4_cout.cpp)
	- [ejercicio 4 - printf](ejercicio_4_printf.cpp)


5. Haga un programa que lea 2 numeros y los imprima de forma ascencente
	- [ejercicio 5 - cout](ejercicio_5_cout.cpp)
	- [ejercicio 5 - printf](ejercicio_5_printf.cpp)


6. Una persona enferma que pesa 70kg, se encuentra en reposo y desea saber cuántas calorías consume su cuerpo durante todo el tiempo que realiza una misma actividad. Las actividades que tiene permitido realizar son únicamente dormir o estar sentado en reposo.
Los datos que tiene son, que estando dormido consume 1.08 calorias por minuto y estando sentado en reposo consume 1.66 calorias por minuto
	- [ejercicio 6 - cout](ejercicio_6_cout.cpp)
	- [ejercicio 6 - printf](ejercicio_6_printf.cpp)


7. Hacer un algoritmo que imprima el nombre de un artículo, clave, precio original  y su precio con descuento.
El descuento lo hace en base a la clave, si la clave es 01 el descuento es del 10% y si la clave es 02 el descuento es del 20% (Solo existen 2 claves)
	- [ejercicio 7 - cout](ejercicio_7_cout.cpp)
	- [ejercicio 7 - printf](ejercicio_7_printf.cpp)


8. Hacer un algoritmo que calcule el total a pagar por la compra de camisas.
Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra y si son menos de 3 camisas un 10%
	- [ejercicio 8 - cout](ejercicio_8_cout.cpp)
	- [ejercicio 8 - printf](ejercicio_8_printf.cpp)


9. Una empresa quiere hacer una compra de varias piezas de la misma clase a una fábrica de refreacciones.
La empresa, dependiendo del monto total de la compra, decidirá qué hacer para pagar al fabricante.
Si el monto total de la compra excede de $500.000 la  empresa tendrá la capacidad de invertir de su propio dinero en un 55% del monto de la compra, pedir prestado al banco un 30%  y el resto lo pagará solicitando un crédito al fabricante.
Si el monto total de la compra no excede de $500.000 la empresa tendrá la capacidad de invertir de su propio dinero un 70% y el restante 30% lo pagará solicitando crédito al fabricante.
El fabricante cobra por concepto de interés un 20% sobre la cantidad que se pague a crédito. 
	- [ejercicio 9 - cout](ejercicio_9_cout.cpp)
	- [ejercicio 9 - printf](ejercicio_9_printf.cpp)


10. Calcular el total que una persona debe pagar en una llantera, si el precio de cada llanta es de $800 si se compran menos de 5 y de $700 si se compran 5 o más.
	- [ejercicio 10 - cout](ejercicio_10_cout.cpp)
	- [ejercicio 10 - printf](ejercicio_10_printf.cpp)



11. El dueño de una tienda de artículos deportivos desea controlar sus ventas por medio de una computadora. Los datos de entrada son:
	- a) El Número de la tienda (1 a 50)
	- b) Un número que indica el deporte del artículo (1 a 20)
	- c) El costo del artículo 

	Hacer un algoritmo que escriba al final del día lo siguiente
	- 1. Las ventas totales en el día para cada tienda
	- 2. Las ventas totales para cada uno de los deportes 
	- 3. Las ventas totales de todas las tiendas. 

	[Ejercicio 11](ejercicio_11.cpp)#� �C�-�C�a�s�o�s�-�P�r�a�c�t�i�c�o�s�-�C�o�m�e�r�c�i�a�l�
�
�
