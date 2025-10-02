#include "Cola.hpp"

int main(int argc, char** argv)
{
    Cola cola;
    
    cola.insertar(1);
    cola.insertar(2);
    cola.insertar(3);
    cola.insertar(4);
    cola.mostrar();
    
    int prim = cola.primero();
    cola.extraer();
    cout << "\tDespues de extraer el primero (" << prim << ")..." << endl;
    cola.mostrar();
    
    cola.insertar(5);
    cola.mostrar();
    cola.extraer();
    cola.mostrar();
    cola.extraer();
    cola.mostrar();
    cola.extraer();
    cola.mostrar();
    cola.extraer();
    cola.mostrar();
	
    system("pause");
    return 0;
}