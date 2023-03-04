#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//sa se faca un meniu interactiv care sa contina urm operatii
//0. iesire
//1. citirea 
//obs:
//sa fie intre 0 si 100
//colturile matricei=10
//2. afisare
//3. afisarea formei binare de pe diagonala principala.
//aloc din

int main()
{
	int opt;
	while (1)
	{
		system("Color 0B");
		printf("\n0.iesire\n");
		printf("1.citire\n");
		printf("2. afisare\n");
		printf("3. afisarea formei binare de pe diagonala principala\n");
		printf("opt ta este=");
		scanf("%d", &opt);
		switch (opt)
		{
		case 0:
			exit(0);
		case 1:
			
			break;
		case 2:
	
			break;
		case 3:
		
			break;
		case 4:

			break;
		case 5:
		
			break;
		default:printf("opt grs");
			break;
		}
			
	}

	return 0;
}