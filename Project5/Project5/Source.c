#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void citire(int **m,int n)
{
	int i, j;
	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("m[%d][%d]=", i + 1, j = 1);
			scanf("%d", &m[i][j]);
		}
	}
}

void afisare(int **m, int n)
{

}

int main()
{
	int opt;
	int n;
	int **m;
	printf("dati nr de linii si col=");
	scanf("%d", &n);
	m = (int**)malloc(sizeof(int*)); //ii cream memoria patratul nostru
	*m = (int*)malloc(sizeof(int)*n*n);

	while (1)
	{
		system("color 9");
		printf("\nopt citire=\n");
		printf("2.afisare=\n");
		printf("dati ipt dorita=");
		scanf("%d", &opt);
		switch (opt)
		{
		case 0:
			exit(0);
		case 1:citire(m, n);
			break;
		case 2:
			break;
		default:printf("opt grs");
			break;
		}
	}

	system("pause");
	return 10;
}