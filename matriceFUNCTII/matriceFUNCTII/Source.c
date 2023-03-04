//fie un text format din maxim 50 de fructe care au lungimea maxima de 20 de caractere.realizati un meniu interactiv cu
//0. iesire
//1. citirea a n fructe
//2. afisarea fructelor citite
//3.cautarea fructelor care sunt = cu un fruct citit de la tast
//4. sortarea fructelor in ordine inversa alfabetica
//5. sa se afiseze sub forma unei matrice patratice de ord dat de nr de fructe o matrice ce are pe diag sec
//lungimea maxima a fructelor din text iar pe restul welem 0
//6. sa se afiseze toate fructele ce au lungimea egala cu o putere a lui 2
//7. sa se inlocuiasca toate caracterele 'a' din fructe cu '?'
//8. sa se stearga toate fructele care sunt = cu un fruct citit de la tast
//obs 1.numele primului fruct e dat automat fiind egal cu 'mar'
//   2.numele ultimului fruct  'cireasa'
//   3. toate fructele sunt formate din litere mici
//   4. nu e permisa folosirea vectorului de structri


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void citireFructe(char t[][20],int nr)
{
	int i;
	strcpy(t[0]," mar");
	strcpy(t[nr - 1], "cireasa"); //pt ca pornim dp poz 0
	for (i = 1; i < nr - 1; i++)
	{
		//do {
			printf("introduceti fructul %d ", i + 1);
			scanf("%s", t[i]);
		//}while(!validLitMici(t[i]));  //punem ampers aici doar daca  e o sing var de ex= &n 
	}
}

void afisareFructe(char t[][20], int nr)
{
	int i;
	for ( i = 0; i < nr; i++)
	{
		printf("%s\t", t[i]);
	}
	
}

//void validLitMici(char *s)
//{
//	int i;
//    for(i=0;i<s[i]!='/0';i++) //strlen(s)
//	{
//		if (!(s[i] >= 'a' && s[i] <= 'z')) return 0;
//	}
//	return 1;
//}

void afCautareFructe(char t[][20], int nr, int f[])            //f[] == *f 
{
	int i;
	for ( i = 0; i <nr; i++)
	{
		if (strcmp(t[i],f)== 0) //adv
		printf("%s\t",t[i]);
	}

}

void sortareFructe(char t[][20], int nr)
{
	int i, k;
	char aux[20];
	do {
		k = 1;
		for (i = 1; i < nr; i++)
			if (strcmp(t[i - 1], t[i]) < 0)
			{
				strcpy(aux, t[i]);
				strcpy(t[i], t[i - 1]);
				strcpy(t[i - 1], aux);
				k = 0;
			}
	} while (!k);

	} while (!k);

}

int main()
{
	char text[50][20];
	char f[20]; //un sir de f(fructe)
	int opt,n;
	while (1)
	{
		system("Color 0B");
		printf("\n0.iesire\n");
		printf("1.citire\n");
		printf("2.afisare\n");
		printf("3. cautare dupa nume\n");
		printf("4. sortare in ord inversa alfabetica\n");
		printf("5. matrice cu diagonala secundara = cu max de lungime fructe iar restu 0\n");
		printf("6. fructe cu lungimea = cu puterea lui 2\n");
		printf("7. inlocuire 'a' cu '?'\n");
		printf("8. stergere fructe \n");
		printf("dati opt=\n");
		scanf("%d", &opt);
		switch (opt)
		{ 
		case 0:
			exit(0);
		case 1:
			printf("dati nr de fructe=");
			scanf("%d", &n);
			citireFructe( text, n);
			break;
		case 2:
			afisareFructe(text, n);
			break;
		case 3:
			printf("introduceti numele fructului cautat=");
			scanf("%s", f);
			afCautareFructe(text, n, f);
		case 4:
			sortareFructe(text, n);
			afisareFructe(text, n);
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		default:printf("opt grs");
			break;
		}

	}
	system("pause");
	return 0;
}