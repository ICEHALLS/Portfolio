#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  int a;
	int b;

	cout<<"Insira respectivamente um valor para a e um valor para b\n";

	cin >> a;

	cout<<"\n";

	cin >> b;

	cout<<"O maior valor é:"<< max(a,b);

	cout <<"\n\nO menor valor é:" <<min(a, b);

	cout<<"\n\nA hipotenusa dos catetos a e b é:"<<hypot(a, b);

	cout<<"\n\nO valor de a elevado à b é:"<<pow(a, b);
	
	cout<<"\n\nO valor de (e) elevado à b é:"<<exp(b);

	cout<<"\n\nO seno de a é(em radianos):"<<sin(a);

	cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

	cout<<"Expressões booleanas para os valores de a e b(Irá retornar 1 para verdadeiro e 0 para falso) :\n\n";

	cout<<"a é maior que b ?\n";
	cout << (a > b);

	cout<<"\n\n b é maior que a ?\n";
	cout << (a < b);

	cout<<"\n\n a é igual a b ?\n";
	cout << (a == b);


}