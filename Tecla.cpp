//
// Created by Andres VEGA on 11/10/2022.
//

#include "Tecla.h"
#include<iostream>
using namespace std;


Tecla::Tecla() {}

Tecla::~Tecla() {

}
void Tecla::mostrar() {
    cout<<"EL Numero es: "<<num<<endl;
    cout<<"El valor ASCII es: "<<nombre<<endl;
}
