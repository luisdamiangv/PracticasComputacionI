//
// Created by Luis Damián on 21/11/2021.
//

//
// Created by Coron on 10/15/2021.
//

#include <cmath>
//const double PI = 3.14159265; // Con hasthag define podemos crear constantes. No entiendo la diferencia de esto y
// const nombre_variable = valor.
#define PI 3.14159265
#include "Punto.h"

using namespace std;

// Con el uso de dos puntos podemos acceder al metodo de una clase
Punto::Punto2D() {
    a = 0;
    b = 0;
}

void Punto::SetPosicion(float x, float y){
    a = x;
    b = y;
}

void Punto:Translate(float temp1, float temp2) {
    a += temp1;
    b += temp2;
}
void Punto::Rotate(float temp1){
    float c = a;
    // Thanks Leonhard Euler
    a = c *cos (temp1*PI/180) - b*sin(temp1*PI/180);
    b = c *sin (temp1*PI/180) + b*cos(temp1*PI/180);
}

void Punto::Scalar(float temp1, float temp2){
    a *= temp1;
    b *= temp2;
}

float Punto::GetX() {
    return a;
}

float Punto::GetY() {
    return b;
}