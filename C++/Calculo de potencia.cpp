#include <stdio.h>


double calcularpotencia(double x, int i){
    double acumulador = 1; //
    double p = x;
    int cont;


		if(i==0)
		{
			printf("Todo numero elevado a zero é um \n");
		}

		else
		{

			if (i<0)
		  {
				acumulador = 1/(acumulador*p);
			}

    	else 
			{
			for(cont = 0; cont < i; cont++)
			{
        	acumulador = acumulador*p;
    	}

			}

		}

    return acumulador;
}

int main()
{
    //variáveis que serão a base(a) e o expoente(b).
    double a;
		int b;

    printf("Digite a base: ");

    scanf("%lf", &a);

    printf("Digite o expoente: ");


    scanf("%d", &b);

    printf("O valor da potencia de %1.lf elevado a %d = %lf\n",a, b,calcularpotencia(a, b));

    return 0;
}