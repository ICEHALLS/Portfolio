#include <iostream>
#include<string>
using namespace std; //esse comando é importante para não precisar ficar escrevendo std::cout por extenso toda vez.


int main() 
{
  cout << "-----------Programa de exemplos referente a semana 2 parte 2:---------------\n\n";

	cout << "-----------Assigment operations:---------------\n\n";

	int c=10;

	cout<<"Temos c =  "<<c;

	c+=1; 

	cout<<"\n\n\nUsando o comando (c+=1) temos c = "<<c;

	c=10;
	c-=1;
	cout<<"\n\n\nUsando o comando (c-=1) temos c = "<<c;

	c=10;
	c*=2;
	cout<<"\n\n\nUsando o comando (c*=2) temos c = "<<c;

	c=10;
	c/=5;
	cout<<"\n\n\nUsando o comando (c/=5) temos c = "<<c;

	c=10;
	c%=3;
	cout<<"\n\n\nUsando o comando (c%=3) temos c = "<<c; //RESTO DA DIVISÃO DE 10 POR 3

	c=10;
	c&=10;
	cout<<"\n\n\nUsando o comando (c&=10) temos c = "<<c;

	c=10;
	c|=2;
	cout<<"\n\n\nUsando o comando (c|=2) temos c = "<<c;

	c=10;
	c^=2;
	cout<<"\n\n\nUsando o comando (c^=2) temos c = "<<c;

	c=10;
	c>>= 4;
	cout<<"\n\n\nUsando o comando (c>>=4) temos c = "<<c;

	c=10;
	c<<=12;
	cout<<"\n\n\nUsando o comando (c<<=12) temos c = "<<c;


	cout<<"\n\n-------------Operadores de comparação-----------\n\n";

	int x = 5;
	int y = 3;

	cout<<"Temos x = 5 e y = 3, vamos testar comparações abaixo, se devolver 0 é falso, se devolver 1 é verdadeiro\n\n";

	cout<<"Para x==y\n";
	cout<<(x == y);

	cout<<"\n\nPara x!=y\n";
	cout<<(x != y);

	cout<<"\n\nPara x>y\n";
	cout<<(x > y);

	cout<<"\n\nPara x<y\n";
	cout<<(x < y);

	cout<<"\n\nPara x>=y\n";
	cout<<(x >= y);

	cout<<"\n\nPara x<=y\n";
	cout<<(x <= y);


	cout<<"\n\n-------------------- Operadores Lógicos------------------------";

	cout<<"\n Os operadores lógicos são:\n\n&& para E \n\n|| para OU \n\n! para NOT (reverte o resultado)\nNo geral são mais usados em funções de condição if e else";

	cout<<"\n\n--------------------STRINGS------------------------";

	string exemplo = "Olá mundo";
	cout<<"\n\n"<<exemplo;

	//concatenação

	string nome = "Natasha ";
	string sobrenome = "Miguita";
	string nomeinteiro = nome + sobrenome;

	cout<<"\n\n"<<nomeinteiro;

	string nomeineiro = nome.append(sobrenome);

	cout<<"\n\n"<<nomeinteiro;

	string frase = "Olá meu nome é Natasha\n\n";

	cout<<"O tamanho da string frase é: "<<frase.length();

	cout<<"\n\nO primeiro caractere da string frase é: "<<frase[0];

	string genero = "ele";

	cout<<"\n\n a string genero é "<<genero;

	cout<<"\n\n Mudando o ultimo caracter:\n";

	genero[2]='a';

	cout<<genero;


	string dia;

	cout<<"\n\nDigite qual dia da semana é hoje:\n";
	cin>>dia;
	cout<<"Hoje é dia: "<<dia;


	






	


}