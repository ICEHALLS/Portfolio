#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "Digite os valores de p e i para calcular o f\n";
	
	float i,p,f;

	cin>>i;

	cout<<"Digite o valor de p:";
	cin>>p;

	f = (p*i)/(p+i);

	cout<<"O valor de f é: "<<f;

	return 0;
} 