//citit si af un v prin aloc din, faceti suma nr impar si produsul celor pare

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int * v;
	int i, n, opt, sumimp=0 , produspar=1 ;

	printf("dati nr de elem=");
	scanf("%d=", &n);
	v = (int*)calloc(n, sizeof(int));
	while (1)
	{
		system("color A");
		printf("\n0.iesire\n");
		printf("1.citire\n");
		printf("2.afisare\n");
		printf("3.suma nr impar si prod celor pare\n");
		printf("opt e=");
		scanf("%d", &opt);
		switch (opt)
		{
		case 0:
			exit(0);
		case 1:


			for (i = 0; i < n; i++)
			{
				printf("v[%d]=", i + 1);
				scanf("%d", v + i);
			}

			break;
		case 2:
			for (i = 0; i < n; i++)
			{
				printf("%d", *(v + i));
			}
			
			break;
		case 3:
			for (i = 0; i < n; i++)
			{
				if (*(v + i) % 2 == 1)
					sumimp = sumimp + *(v + i);
				else
					produspar *= *(v + i);
			}
			printf("suma e=%d", sumimp);
			printf("prod e=%d", produspar);
			break;
		default:printf("opt grs");
			break;
		}

	}

	system("pause");
	return 0;
}