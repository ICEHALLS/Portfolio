#include <iostream>
using namespace std;

int main() {

	int a;
  cout << "Olá seja bem vindo ! Deseja prosseguir ? Se sim digite 1, se não digite qualquer outra tecla\n";

	cin >> a;

	if(a == 1){

		cout<<"Voce escolheu seguir em frente. Qual sua bebida preferida ?Digite:\n\n1-Café\n\n2-Suco natural\n\n3-Vinho\n\n";

		int b;

		cin >> b;

			if(b==1){

				cout<<"Voce escolheu café, parabens";

			}

			else if (b==2){
				cout<<"Voce escolheu suco natural, muito saudável";
			}

			else if(b==3){
				cout<<"Voce escolheu vinho !! Cuidado com o alcoolismo";
			}

			else{
				cout<<"A opção escolhida não existe.";
			}


	
	}

	else{
		cout<<"Voce escolheu terminar o programa";
	}

}