#include <iostream>
#include<cmath>
using namespace std;

float ML(int m, int v) {

	float mom;

	mom = m*v;

	
  return mom;
}

int main() {

	cout<<"Olá Seja Bem vindo.\n\n\nAqui, vamos calcular o momento linear de uma partícula em movimento retilineo na horizontal. Sendo\n\nm --> massa[kg]\n\nv --> velocidade[m/s] \n\ninforme os valores de massa e velocidade para calcular o momento linear da sua partícula ou objeto";

	int momento, velocidade,massa;

	cout<<"Informe a velocidade:\n";
	cin>>velocidade;
	cout<<"\nInforme a massa:\n";
	cin>>massa;

	cout<<"O momento linear do móvel é:\n";
	momento = ML(massa,velocidade);

	cout<<momento;



}