#include "Persona.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL)); 

    Persona* personas[10];
    bool usada[28] = {false}; 

    int count = 0;
    while (count < 10) {
        int edad = 18 + rand() % 10; 
        if (!usada[edad]) {
            personas[count] = new Persona(edad);
            usada[edad] = true;
            count++;
        }
    }

    for (int i = 0; i < 10; i++) {
        personas[i]->mostrar();
        delete personas[i];
    }
	system("pause");
    return 0;
}
