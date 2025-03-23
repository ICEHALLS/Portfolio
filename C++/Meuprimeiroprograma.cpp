#include <iostream> /*/ Biblioteca de comandos básicos /*/
using namespace std;

int main() {
  cout << "Hello World! Meu primeiro programa é esse";  /*/ A função cout <<""; é usada para imprimir textos /*/

	/*/ 
	Se por acaso fosse desejado omitir o 'using name space std' poderíamos por a função a baixo:
	std::cout << "Hello World!";
	/*/


	cout <<"\n\n------------------------------------------------------------\n\n";

	cout <<"A função cout é chamada de output, como foi escrito nos comentários acima ela serve para imprimir textos na tela do programa. Podemos usá-la quantas vezes for necessário ou desejado.";


		cout <<"\n\n------------------------------------------------------------\n\n";

			cout <<"Existem duas formas de pular linha. Uma das formas é usando o comando barra n como foi usado anteriormente ou usando outro comando chamado endl...Exemplo:" << endl;

			cout <<"aaaaaa" << endl; 

			cout<<"Os comentarios também podem ser adicionados como no C. Usando duas barras ou usando barra asterisco barra:";

			//comentários

			/*/ Comentário /*/


			cout<<"\n\n--------------------------------------------------------------------------\n\n";

			cout<<"Variáveis";

			cout<<"\n\nExistem variaveis de varios tipos, assim como em C a unica coisa que muda é o comando para imprimir a variável, como nos exemplos abaixo:\n\n";

			int a = 1;
			float b = 2.3;
			double c = 12.3333;
			char myletter = 'n';
			string mya = "Natasha";
			bool f = false;
			bool t = true;


			cout << a <<"\n\n";
			cout << b <<"\n\n";
			cout << c; cout <<"\n\n";
			cout << myletter; cout <<"\n\n";
			cout << mya; cout <<"\n\n";
			cout << f; cout <<"\n\n";
			cout << t; cout <<"\n\n";


		cout << "A =  " << a << "\n\n";




  return 0;
}