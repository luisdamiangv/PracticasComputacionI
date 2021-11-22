//
// Created by Luis Damián on 21/11/2021.
//

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

class Punto {
public:
    //Constructor
    Punto();

    //Setters
    void SetX(float _X);
    void SetY(float _Y);

    //Getters
    float GetX();
    float GetY();

    //Other functions
    void Translate(float x, float y);
    void SetPosicion(float x, float y); //Función indispensable
    void Rotate(float temp1);
    void Scalar(float temp1, float temp2);

private:
    float a,b; //Variables
};


#endif //PUNTOS_PUNTO_H
