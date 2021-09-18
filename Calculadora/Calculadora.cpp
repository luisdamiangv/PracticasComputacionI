#include <iostream>
#include <string>
#include <cmath>

/*
	*Author: Luis Damián García
	* Contact: luisdamiangarcia@comunidad.unam.mx
*/


using namespace std;
int main () {
	 //Asignamos nuestras variables 
	 int ct{1};
	 double numero1, numero2;
	 char operacion;
	 string resultado{"Resultado: "};
	 
		//Inicializamos nuestro programa con un comando while 
	 	while (ct==1) {
	 		cout <<"Ingrese un numero" << endl;
	 		cin >> numero1;
	 		
	 		cout << "Ingrese una operacion" << endl;
	 		cin >> operacion;
	 		
	 		cout <<"Ingrese otro numero" << endl;
	 		cin >> numero2;
	 	 
	 	   // Con cinco ciclos if programamos nuestras distintas operaciones con las variables previamente declaradas
	 	   // Para la division y modulo modificamos el ciclo a 'if-else' para que nos permita detectar una división entre cero
	 	   
	 	   if (operacion == '+') {
	 	   	
	 	   		cout << resultado << numero1 + numero2 << endl;
			}
			
			
			if (operacion == '-') {
				
				cout << resultado << numero1 - numero2 << endl;
			}
			
			
			if (operacion == '*') {
				
				cout << resultado << numero1 * numero2 << endl;
			}
			
			
			else if (operacion == '/') {
				if (numero2 == 0) {
					cout << "Operacion no definida" << endl;
				}
				else { 
				cout << resultado << numero1 / numero2 << endl;
			}
		
		
			}
			else if (operacion == '%'){
				if (numero2 == 0) {
					cout << "Operacion no definida" << endl;
				}
				else {
					cout << resultado << fmod(numero1,numero2) << endl;
				}
			}
		
	
	 }
		 
}