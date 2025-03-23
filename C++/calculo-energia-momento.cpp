#include <iostream>
#include<cmath>
#include<math.h>
#include<locale.h>


using namespace std;



int main() {
	
	setlocale(LC_ALL,"portuguese");

	double massaz,massaparticula,momento1,energia, momentofinal;
	
	
	massaz = 1234;
	massaparticula=12;

	energia = massaz/2;
	momento1= (pow(massaz,2) - 4*pow(massaparticula,2));
	momentofinal = sqrt(momento1);
	
	cout<<"A energia é "<<energia;
	cout<<"\n\n o momento é: "<<momentofinal;
	

	

	
	





}