/*Sa se scrie un program in c care permite utilizatorului gestionarea unei clase de
elvi, elevii sunt caracterizati de nume, varsta si medie generala
Sa se realizeze un meniu interactiv care:
1.Adauga un nou elev de la tastatura
Elevul va fi considerat citit corect daca numele incepe cu litera mare si restul
contine doar litere mici si varsta este cuprinsa intre 8 si 16 ani
2.Afisarea elevilor din clasa in ordine crescatoare a mediei
3.Sa se stearga elevii care au media cea mai mica si cea mai mare din clasa
4.iesire*/

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct elevi {
	char nume[20];
	int varsta;
	int medie;
}E;

void citire_elevi(E *e, int *n)
{
	(*n)++;
	//do {
		printf("Nume:");
		scanf("%s", (e + *n)->nume);
	//} while (!(validare_nume((e + *n)->nume)));
	printf("Varsta:");
	scanf("%d", &((e + *n)->varsta));
	printf("Medie generala:");
	scanf("%f", &((e + *n)->medie));

}
void afisare(E *e, int n)
{
	int i;
	for (i = 0; i <= n; i++)
		printf("%s %d %.2f\n", (e + i)->nume, (e + i)->varsta, (e + i)->medie);
}

int main()
{
	E el[20];
	int opt,i;
	int n = -1;
	system("color 9");
	while (1)
	{
		printf("Meniu:\n");
		printf("1.Adauga un nou elev de la tastatura\n");
		printf("2.Afisarea elevilor din clasa in ordine crescatoare a mediei\n");
		printf("3.Sa se stearga elevii care au media cea mai mica si cea mai mare din clasa\n");
		printf("4.Iesire\n");
		printf("Optiunea dumneavoastra este:");
		scanf("%d", &opt);

		switch (opt)
		{
		case 0:
			exit(0);
		case 1:
			afisare(el, &n);
				break;
		case 2:
			citire(el, n);
				break;
		case 3:
				break;
		default : printf ("opt grs");
			break;
		}
	}

	return 0;
}