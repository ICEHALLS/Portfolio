#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct carbono
{
	char nome[20];
	int ma12;
	int ma13;
	int ma14;
	int ra12;
	int ra13;
	int ra14;
	int indice;
};

int main(void) 
{
	struct carbono ficha1;
		strcpy(ficha1.nome,"carbono");
		ficha1.ma12 = 12;
		//ficha1.ra12 = rtc[0];
		ficha1.ma13 = 13;
		//ficha1.ra13 = rtc[1];
		ficha1.ma14 = 14;
		//ficha1.ra14 = rtc[2]
		
		
		printf("O nome do elemento é %s",ficha1.nome);

		printf("Suas respectivas massas são %d, %d e %d",ficha1.ma12,ficha1.ma13,ficha1.ma14);
		//printf("Seus respectivos raios são: %d, %d e %d",ficha1.ra12,ficha1.ra13,ficha1.ra14);

		system("pause");
  
  return 0;
}