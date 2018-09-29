#include <iostream>
using namespace std;

int main()
{
	int num,k;
	k=0;
	cout << "Inserte un numero: ";
	cin >> num;
	for (int i = 1; i < num; i++)
	{
		if (num%i == 0)
		{
			k=k+1;
		}
	}
	if (k==1)
	{
		cout << "Primo" << endl;
	}
	else
	{
		cout << "No primo" << endl;
	}
	system("PAUSE");
	return 0;
}