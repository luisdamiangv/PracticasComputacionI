//
// Created by Luis Damián on 12/10/2021.
//

#include <math.h>
#include "Punto.h"

#define PI 3.14159265

using namespace std;


void Punto2D::SetPosicion(double a, double b) {
    x=a;
    y=b;
}

float Punto2D::Trasladar(float temp1, float temp2) {
    x+=temp1;
    y+=temp2;
    return 0;
}
float Punto2D::RotarRespectoAlOrigen(float temp1){
    // Thanks Leonhard Euler
    temp1*= PI / 180;
    float xe=x;
    x= (x*cos(temp1))-(y*sin(temp1));
    y= (xe*sin(temp1))+(y*cos(temp1));
    return 0;
}

float Punto2D::Escalar(float temp1, float temp2) {
    x*=temp1;
    y*=temp2;
    return 0;
}

//Getters (sin parámetros, regresan el valor de nuestras variables privadas)
float Punto2D::GetX(){
    return x;
}

float Punto2D::GetY() {
    return y;
}