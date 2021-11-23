//
// Created by Luis Damián on 22/09/2021
//

#include <iostream>
#include <array>
#include <stdlib.h>

using namespace std;

//// Declaración de funciones
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
            cout << "Valor elemento [" << i << "][" << j << "]: ";
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
    cout << "Solucion: \n" <<endl;
    for(int i = 0; i < variables; i++){
        cout <<"x" << i+1 << " = "<< miMatriz[i][variables] << endl;
    }
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
    double pivote, aux, mayor;
    int indice;

    int variables = miMatriz.size();
    for(int i = 0; i < variables; i++ ){
        mayor = abs(miMatriz[i][i]);
        indice = i;

        for(int j = i + 1; j < variables; j++){
            if( mayor < abs(miMatriz[j][i])) {
                mayor = abs(miMatriz[j][i]);
                indice = j;
            }
        }

        if(i != indice){
            for(int k = 0; k < variables + 1; k++){
                aux = miMatriz[i][k];
                miMatriz[i][k] = miMatriz[indice][k];
                miMatriz[indice][k] = aux;
            }
        }


        if(miMatriz[i][i] == 0){
            cout << "No tiene solucion :( " << endl;
        }

        else{
            for(int k = 0; k < variables; k++){
                if (k != i){
                    pivote = -miMatriz[k][i];
                    for(int l = i; l < variables + 1; l++){
                        miMatriz[k][l] = miMatriz[k][l] + pivote * miMatriz[i][l] / miMatriz[i][i];
                    }
                }
                else{
                    pivote = miMatriz[i][i];
                    for(int l = i; l < variables + 1; l++){
                        miMatriz[k][l] = miMatriz[k][l] / pivote;
                    }
                }
            }
        }
    }
}