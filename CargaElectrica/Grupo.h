//
// Created by Luis Damián on 08/11/2021.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H
#include <string>

using namespace std;
class Grupo {
    private:
        string name;
        float pka;
        int charge;

    public: //Aquí declaramos todas las funciones incluido el constructor
    Grupo(string, float, int);
    Grupo();
    int GetCharge();
    float GetpK();
};

#endif //CARGAELECTRICA_GRUPO_H
