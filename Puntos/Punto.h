//
// Created by Luis Damián on 21/11/2021.
//

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

class Punto2D {
public:
    //Constructor
    //Punto2D();

    //Setters
    void SetX(float _X);
    void SetY(float _Y);

    //Getters
float GetX() ;
  float GetY() ;

    //Other functions
    float Trasladar(float x, float y);
    void SetPosicion(double a, double b); //Función indispensable
    float RotarRespectoAlOrigen(float temp1);
    float Escalar(float temp1, float temp2);

private:
    float x,y; //Variables
};


#endif //PUNTOS_PUNTO_H
