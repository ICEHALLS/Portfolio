#include <iostream>
using namespace std;

int main() 
{ 
	float a,an,r;
	int i;
	cout<<"Escolha uma razão r e um numero a1 para calcular uma PA de n=1 à n=10 (Fórmula da PA : an = a1 + r(n-1)";
	cout<<"\nDigite um valor para r:\n";
	cin>>r;
	cout<<"\nDigite um valor para a1\n";
	cin>>a;

	cout<<"\n\n";


	

	for (i = 1; i <= 10; i++) 
	{		
		an = a + r*(i-1);

		cout<<"a"<<i;
  	cout<<" = " <<an<<"\n";
		
	}
}