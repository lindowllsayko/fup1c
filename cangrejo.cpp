#include<stdio.h>.
#include<stdlib.h>

int metros;
int dia;
int noche;
int salir;
int avance;
int suma=0;

int main()
{
	printf(" avance de un cangrejo ");
	
	printf("dime cuantos metros de profundidad");
	scanf("%d",&metros);
	printf("dame los metros que avanza de dia");
	scanf("%d",&dia);
	printf("dame los metros que avanza de noche");
	scanf("%d",&noche);
	if(dia>noche)
	{
		for(salir=0;suma<=metros;salir++)
		{
			avance=dia-noche;
			suma=suma+avance;
			
		}
		
		printf("el cangrejo sale en el dia %d",salir);
			
	}
	else
	{
		printf("el cagrejo no sale");
	}
	system("pause");
}
