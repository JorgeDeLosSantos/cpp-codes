/*
 * Cuenta la cantidad de vocales en una palabra
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	string cad;
	string v="a";
	cout << "Inserte cadena: ";
	cin >> cad;
	for (int i = 0; i < 5 ; i++)
	{
		if (cad[i]==v) {
			cout << "Tienes a";
		}
	}
	//system('color F0');
	//cout << "Hay " << nv << endl;
	return 0;
}
