#include <iostream>
#include <cstdlib>

using namespace std;

void inicio();

int main()
{
	int u[2];
	int v[2];
	int pp;
	system("color F0");
	inicio();
	cout << "Inserte las componentes del primer vector: " << endl;
	cin >> u[0] >> u[1];
	cout << "Inserte las componentes del segundo vector: " << endl;
	cin >> v[0] >> v[1];
	pp=(u[0]*v[0]) + (u[1]*v[1]);
	cout << "Producto punto: " << pp << endl;
	system("color");
	return 0;
}

void inicio()
{
	cout << "Producto punto de vectores bidimensionales \n" << endl;
}
