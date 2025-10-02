#include "Persona.hpp"
#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>   // time

using namespace std;

Persona::Persona(int edad) {
    this->edad = edad;

    
    genero = rand() % 2;

    
    for (int i = 0; i < 8; i++) {
        dni[i] = '0' + (rand() % 10);
    }
    dni[8] = 'A' + (rand() % 26); 
    dni[9] = '\0'; 
}

Persona::~Persona() {
    
}

int Persona::getEdad() {
    return edad;
}

bool Persona::esMujer() {
    return genero; 
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrar() {
    cout << "Edad: " << edad
         << " | Genero: " << (genero ? "Mujer" : "Hombre")
         << " | DNI: " << dni << endl;
}
