#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Olá, Bem vindo. Escolha um valor para as variáveis x e y\n";
	float x,y;
	int i,a;

	cin >> x;
	cout<<"\n";
	cin >> y;

	i=1;

	
	while(i==1){
	cout << "Escolha a operação. Digite \n\n1-Calcular a hipotenusa dos catetos x e y\n\n2-Calcular o seno de x e seno de y\n\n3-Calcular (e) elevado a x e a y\n\n4-Calcular x elevado a y\n\n";

	

	cin>>a;

	

	switch(a) 
	{
  case 1:
    cout<<"O valor da hipotenusa dos catetos x e y é: "<<hypot(x, y);
		cout<<"\n\nDigite 1 para repetir\n";
		cin >> i;
    break;
  case 2:
    cout<<"O seno de x é: "<<sin(x);
		cout<<"\n\nO seno de y é: "<<cos(x);
		cout<<"\n\nDigite 1 para repetir\n";
		cin >> i;
    break;

	case 3:

		cout<<"O valor de (e) elevado a x é: "<<exp(x);
		cout<<"\n\nO valor de (e) elevado a y é: "<<exp(y);
		cout<<"\n\nDigite 1 para repetir\n";
		cin >> i;
		break;

	case 4:
		cout<<"O valor de x elevado a y é: "<<pow(x, y);
		cout<<"\n\nDigite 1 para repetir\n";
		cin >> i;
		break;


  default:
		cout<<"\n\nDigite 1 para repetir\n";
		cin >> i;
	}

	}
}