#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
	int x,y,z;
	cout << "Introduzca el primer numero: ";
	cin >> x;
	system("pause");
	cout << "Introduzca el segundo numero: ";
	cin >> y;
	system("pause");
	z = x + y;
	cout << "La suma " << x << " mas " << y << " es igual a " << z << "." <<endl;
	system("pause");
	return 0;
}
