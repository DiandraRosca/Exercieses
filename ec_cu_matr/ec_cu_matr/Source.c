#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m[20][20], i, j, n,l,s=0,prim;
	enum matrice{iesire,citire,afisare,suma_nrprime,cifre}opt;
	while (1)
	{
		system("color A");
		printf("\n0.iesire\n");
		printf("1.citire\n");
		printf("2.afisare\n");
		printf("3.suma nr prime de pe o anum linie citita de la tast\n");
		printf("4.elem care au cel putin 2 cf din cadranul matricei (margini)sunt=\n");
		printf("opt ta=");
		scanf("%d", &opt);
		switch (opt)
		{
		case iesire:
			exit(0);
		case citire:
			printf("dati n de linii si colo=");
			scanf("%d", &n);
			for ( i = 0; i < n; i++)
			{
				for ( j = 0; j < n; j++)
				{
					printf("m[%d][%d]=", i, j);
					scanf("%d", &m[i][j]);
				}
			}
			break;
		case afisare:
			for (i = 0; i < n; i++)
			{
				printf("\n");
				for (j = 0; j < n; j++)
					printf("%d ", m[i][j]);
			}
			break;
		case suma_nrprime:
			printf("dati linia dorita=");
			scanf("%d", &l);
			l--;  //l=l-1;  //pt a putea da de la tast linia 1 sa nu incepem de la  0 
			s = 0;
			for ( j = 0; j <n; j++)
			{
				prim = 1;
				for (i = 2; i < m[l][j] / 2; i++)
					if (m[l][j] % i == 0)
						prim = 0;
					if (prim == 1)
						s = s + m[l][j];
			}
			printf("suma=%d", s);

			break;
		case cifre:
			printf("nr de 2 cf dp cadranele matricei sunt= ");
			for (j = 0; j < n-1; j++)  //n-1 sa nu se repete
				if (m[0][j] >= 10)
					printf("%d ", m[0][j]);
			for (i = 0; i < n; j++)
				if (m[i][n-1] >= 10)
					printf("%d ", m[i][n-1]);
			for (j = n-2; j>=0; j--)
				if (m[n-1][j] >= 10)
					printf("%d ", m[n-1][j]);
			for (i = n-2; i>0; i--)
				if (m[i][0] >= 10)
					printf("%d ", m[i][0]);*
		
			break;
		default:printf("opt grs");
			break;
		}
	}

	system("pause");
	return 0;
}