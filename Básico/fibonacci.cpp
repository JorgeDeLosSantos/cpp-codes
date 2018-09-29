#include <iostream> 
using namespace std;
int main()
{
	int n,f1,f2,fi;
	n=10;
	f1=1;
	f2=1;
	for (int i = 0; i < n; i++)
	{
		fi=f1+f2;
		cout << fi << endl;
		f2=f1;
		f1=fi;
	}
}