#include <iostream>
using namespace std; //esse comando é importante para não precisar ficar escrevendo std::cout por extenso toda vez.

int main() 
{
  cout << "-----------Programa de exemplos referente a semana 2:---------------\n\n";

	/* Comando de entrada de dados (user input) */

	int x; //Aqui definimos uma variável x, onde o usuário terá que digitar um valor que será armazenado nesse x

	cout << "Digite um valor para armazenar na variável x:\n";
	cin >> x;
	cout<<"O valor armazenado foi "<<x;



	cout<<"\n\n\n\n\n";
	cout<<"-----------------------------------\n\n";
	

	/* O comando a baixo será referente a Data types*/


	int inteiro = 21;      // Referente a numero inteiro
	float real = 3.14;     // Referente a numero real
	double real2 = 9.98;   // Referente a numero real também porém com mais precisão
	char letra = 'N';         // Letra
	bool booleana = true;       // Boolean
	string frase = "Segundasemana";     // String ou frase

	cout<<"O valor da variável inteira é: "<<inteiro; //Tamanho: 4 bytes
	cout<<"\nO valor da variável real é: "<<real; 		// Tamanho: 4 bytes
	cout<<"\nO valor da variavel double é: "<<real2; 	//Tamanho: 8 bytes
	cout<<"\nA letra armazenada em char é: "<<letra;	//Tamanho: 1 byte
	cout<<"\nA booleana tem valor: "<<booleana; 			//Tamanho 1 byte
	cout<<"\nA string é: "<<frase; 										//Tamanho: 1byte


/*/-------------------------------------------------*/ 
	cout<<"\n\n------------------Operadores-----------------\n\n";


	int a = 10;
	int b = 2;


	cout<<"Os valores de a é: "<< a ;
	cout<<"Os valores de b é: "<< b ;

	int soma = a+b;
	int subtracao = a-b;
	int mult= a*b;
	int div = a/b;
	int resto = a%b;
	int incremento = ++a;
	int decremento = --b;

	cout<<"soma de a e b = "<<soma ;
	cout<<"\nsubtração de a e b = "<<subtracao ;
	cout<<"\nmultiplicacao de a e b = "<<mult ;
	cout<<"\ndivisão de a e b = "<<div ;
	cout<<"\nresto da divisão de a e b = "<<resto ;
	cout<<"\nincremento de a = "<<incremento ;
	cout<<"\ndecremento de b = "<<decremento ;
}