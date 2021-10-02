#include <iostream>
#include <array>
/*
Author: Luis Damián García
 luisdamiangarcia@communidad.unam.mx
 Oct 1, 2021
*/
using namespace std;


//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);


int main()
{
	
	cout << "Bienvenido, con este programa podrás resolver un sistema de 3 ecuaciones con tres variables. Se te pedira introducir los coeficientes de tus ecuaciones. \n"<< endl;
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/* 
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/

template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/* 
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    int variables = miMatriz.size();
    cout << "\nLa soslucion al sistema de ecuaciones es: \n";
    for (int i = 0; i < variables; i++){
    	cout << "x" << i+1 << " = " << miMatriz[i][variables] << endl;
	}
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
     double upper;
    int indice;
    double auxiliar;
    double pivote;

    int rows = miMatriz.size();
    for(int i = 0; i < rows; i++ ){
        upper = abs(miMatriz[i][i]);
        indice = i;
        for(int j = i + 1; j < rows; j++){
            if(upper < abs(miMatriz[j][i])){
                upper = abs(miMatriz[j][i]);
                indice = j;
            }
        }
        if(i != indice){
            for(int h = 0; h < rows + 1; h++){
                auxiliar = miMatriz[i][h];
                miMatriz[i][h] = miMatriz[indice][h];
                miMatriz[indice][h] = auxiliar;
            }
        }
        if(miMatriz[i][i] == 0){
            cout << "El sistema no tiene solucion\n";
        }
        else {
            for(int h = 0; h < rows; h++){
                if (h != i){
                    pivote = -miMatriz[h][i];
                    for(int l = i; l < rows + 1; l++){
                        miMatriz[h][l] = miMatriz[h][l] + pivote * miMatriz[i][l] / miMatriz[i][i];
                    }
                }
                else{
                    pivote = miMatriz[i][i];
                    for(int l = i; l < rows + 1; l++){
                        miMatriz[h][l] = miMatriz[h][l] / pivote;
                    }
                }
            }
        }
    }
}