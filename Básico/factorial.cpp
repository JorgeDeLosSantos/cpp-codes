/*
 * Calcula el factorial de un entero mediante recursividad
*/
#include <iostream>
using namespace std;

int factorial(int num);

int main(){
	cout << factorial(5) << endl;
	return 0;
}

int factorial(int num){
	if (num==1) {
		return 1;	
	}
	else{
		return num*factorial(num-1);
	}
}
