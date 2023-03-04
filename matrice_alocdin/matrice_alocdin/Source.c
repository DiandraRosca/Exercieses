//cititi si afisati o matrice
//1.citire
//2. afisare
//0.iesire  ,folosind alocare dinamica de memorie
//matrice patratica 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	int **m;
	int opt, i, j, n;   

	printf("\ndati nr de linii si de coloane");
	scanf("%d", &n);
	m = (int**)malloc(sizeof(int*));  //aici se va face o zona de mom in afara while ului fiindca nu stim daca utiliz introduce tasta 1mai intai 
	*m/*m[0]*/ = (int*)malloc(sizeof(int)*n*n);  //aici zicem exact cate int uri avem nevoie
	
	while(1)
	{
		printf("\n0.iesire\n");
		printf("1.citire matrice\n");
		printf("2.afisare\n");
		printf("opt=");
		scanf("%d", &opt);

		switch (opt)
		{
		case 0:
			exit(0);
		case 1:
			
			for(i=0;i<n;i++)
				for (j = 0; j < n; j++)
				{
					printf("introduceti m[%d][%d]=",i+1,j+1);
					scanf("%d",*m+n*i+j );    //aici citim adresa.prima casuta desenata
			  }
			break;
		case 2: 
			for (i = 0; i < n; i++)
			{
				printf("\n");
				for (j = 0; j < n; j++)
					printf("%d", *(*m + n * i + j)); //inca o * pt ca ne referim la valoare
			}
			break;
		default:printf("opt grs");
			break;
		}
	} 

	system("pause");
	return 0;
}