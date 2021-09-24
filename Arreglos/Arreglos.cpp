#include <iostream>
#include <array>
//Número de elementos en los arreglos
#define LEN 3 

// Añadir std para fácil llamado de funciones
using namespace std;

// Declaración de funciones
void ImprimirArreglo(array<float, LEN> arreglo);
array<float, LEN> LlenarArreglo(void);
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo);
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2);

int main()
{
    char decision;
// Inicializamos el arreglo con ceros como buena práctica
	array<float, LEN> arr = { 0 }; 
// Solicitamos al usuario que llene un arreglo y lo asignamos a nuestro arreglo principal
	arr = LlenarArreglo(); 
    cout << "Operacion: ";
    cin >> decision;
    
    /* Si la operación no es '+' de suma, o '*' de multiplicación, 
	seguimos preguntando al usuario.*/
    while (decision != '+' && decision != '*') {
        cout << "Operacion: ";
        cin >> decision;
    }
    
// Si se ingresa la multiplicación
    if (decision == '*') {
        float factor;
// Pedimos el factor a multiplicar
        cout << "Factor: ";
        cin >> factor;  
/* Multiplicamos nuestro arreglo principal por el factor y 
el resultado lo asignamos a nuestro arreglo principal.*/
        arr = MultiplicarArreglo(arr, factor); 
		}
   
// Si se ingresa la suma
    else if (decision == '+') {
// Creamos el segundo arreglo y lo inicializamos en ceros
        array<float, LEN> arr2 = {0}; 
        arr2 = LlenarArreglo(); 
// Pedimos al usuario que llene otro arreglo y lo asignamos a nuestro nuevo arreglo
        arr = SumarArreglos(arr, arr2); 
/* Sumamos ambos arreglos elemento a elemento, 
y reasignamos el resultado a nuestro arreglo principal */
    }
    
    cout << "Resultado: ";
// Imprimimos el resultado de la operación sobre el arreglo principal
	ImprimirArreglo(arr); 

// Indicamos que salimos del programa con éxito
	
	return 0; 
}

/* Imprime los elementos del arreglo llamado 'arreglo' 
separando cada elemento con un espacio en blanco*/
void ImprimirArreglo(array<float, LEN> arreglo)
{
    for (int i = 0; i < LEN; i++)
        cout << arreglo[i] << ' ';
    cout << '\n';
}

// Llena un arreglo de tamaño LEN y lo "regresa" como resultado
array<float, LEN> LlenarArreglo()
{
 	array<float, LEN> arr{0};
/* Mediante un ciclo for llenamos las entradas correspondientes  
a nuestro arreglito 
*/
		for (int i=0; i<LEN; i++) {
			cout << "Ingrese su entrada numero " << i+1 << endl; 
			cin>> arr[i];
	}
}

// Multiplica cada elemento del arreglo 'arreglo' por el factor 'mult'
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo)
{
/*Otro ciclo for nos permitirá multiplicar 
nuestro arreglito con la variable múltiplo*/
	array<float, LEN> arr{0};
	for (int i = 0; i < LEN; i++){
		arr[i] = arreglo[i] * multiplo; 
	}
	return arr;
}

// Suma elemento a elemento los arreglos 'arr1' y 'arr2' y regresa el arreglo resultante
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2)
{
 		array<float, LEN> arr{0};
		 for (int i =0;i<LEN; i++){
		 	arr[i]=arr1[i] + arr2[i];
		 }	
		 return arr;

}