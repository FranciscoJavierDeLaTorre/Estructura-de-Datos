#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona
{
public:
	Persona(int edad);
	~Persona();
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	void mostrar();
//CREAR NUMEROS ALEATORIOS SIN UNSAR random()
private:
	bool genero;
	int edad;
	char dni[10];
};

#endif // PERSONA_HPP
