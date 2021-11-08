//
// Created by Luis Damián on 08/11/2021.
//

#include "Grupo.h"
Grupo::Grupo() {
    name = " ";
    pka = 0;
    charge = 0;
}

 Grupo::Grupo(string nombreGrupo, float pkGrupo, int cargaGrupo) {
    name = nombreGrupo;
    pka = pkGrupo;
    charge = cargaGrupo;
}

// esta función regresa el valor de la carga de cada uno de los grupos de la molecula
int Grupo::GetCharge() {
    return charge;
}

// esta función regresa el valor de pka de cada uno de los grupos de la molecula
float Grupo::GetpK() {
    return pka;
}