/*
	Fie un text format din maxim 50 de fructe, care au lungimea maxima de 20 de caractere
	Realizati un meniu cu urmatoarele optiuni:    t[50][20]
	0.Iesire
	1.Citirea a n fructe de la tastatura
	2.Afisarea fructelor citite
	3.Cautarea fructelor care sunt egale cu un fruct citit de la tastatura
	4.Sortarea fructelor in ordine invers alfabetica
	5.Sa se afiseze sub forma unei matrice patratice de ordinul dat de nr de fructe o matrice ce are pe diagonala secundara lungimea maxima
a fructelor din text, iar pe restul elementelor 0. i==j i+j=nr-1
	6.Sa se afiseze toate fructele ce au lungimea egala cu o putere a lui 2
	7.Sa se inlocuiasca toate carcaterele 'a' din fructe cu '?'
	8.Sa se stearga toate fructele care sunt egale cu un fruct citit de la tastatura
	OBSV
		*Numele primului fruct este dat automat fiind egal cu mar
		*Numele ultimului fruct este dat automat fiind egal cu cireasa
		*Toate fructele sunt formate din litere mici
		*Nu este folosirea vectorlui de structuri
		(avem sir de siruri)
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void stergere(char t[][20], int *nr, char elems[])
{
	int i, j;
	for (i = 0; i < *nr ; i++)
		if (strcmp(t[i], elems) == 0)
		{
			for (j = i; j < *nr - 1; j++)
			{
				strcpy(t[j], t[j + 1]);
				i--;
				(*nr)--;
			}
			
		}

}

void cautare(char t[][20], int n,char f[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (strcmp(t[i], f) == 0)
			printf("%s \t", t[i]);

	}
}

int validlit(char *s)
{
	int i;
	for (i = 0; i < strlen(s); i++)
	{
		if (!(s[i] >= 'a' && s[i] <= 'z'))
			return 0;
	}
	return 1;
}
 
void citire(char t[][20], int nr)
{
	int i;
	strcpy(t[0], "mar");
	strcpy(t[nr - 1], "cireasa"); 
	for ( i = 1; i <nr-1; i++)
	{
		do {
			printf("introduceti fructe %d", i + 1);
			scanf("%s", t[i]);
		} while (!(validlit(t[i])));
		
	}
}

void afisare(char t[][20], int nr)
{
	int i;
	for ( i = 0; i <nr ; i++)
	{
		printf("%s \n", t[i]);
	}
}
int main()
{
	int opt;
	char text[50][20];
	char f[20];
	int n;

	while (1) {
		printf("opt=\n");
		scanf("%d",&opt);
		switch (opt)
		{
		case 0:
			exit(0);
		case 1:
			printf("nr frct=\n");
			scanf("%d", &n);
			citire(text, n);
			break;
		case 2:afisare(text, n);
			break;

		case 3:printf("Introduceti fructul pe care-l cautati: ");
			scanf("%s", f);
			cautare(text,n,f);
			break;
		case 4:
			break;
		case 5: //altsir(sir, v);
			printf("Introduceti fructul pe care-l stergeti: ");
			scanf("%s", f);
			stergere(text, &n, f);
			afisare(text, n);
			break;
		default:printf("opt grs");
			break;
		}
	}

	return 0;
}