//un sir de caractere 
//se va repeta citirea pana prima lit va fi una mare
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int opt,k=0, i,j,contor=0,cifre,ok=0,vocale,consoane,spatii;
	char sir[20],car,sir2[20];
	while (1)//do{
	{

		printf("\n1.citirea sirului\n");
		printf("2.af sirului\n");
		printf("3.numarati de cate ori apare un caracter de la tast are\n");
		printf("4.creati un nou sir in case se salv inversului primului sir\n");
		printf("5. sa se af sirul daca e palindrom , dc nu e se va afisa sirul cu *\n");
		printf("6.sa se num cate voc,cons,cifre si spatii albe are sirul\n");
		printf("7.stergeti toate caracterele din sir care nu s lit\n");
		printf("0.iesire\n");
		printf("opt ta e=");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			getchar();
			//do {
			//	printf("sirul este=");
			//	//e folosit doar pt un cuvant scanf("%s", &sir);
			//	gets(sir);
			//} while (sir[0]<'A' || sir[0]>'Z');
			//printf("\n");
			//SAU in cazul in care avem mai multe validari
			do {
				printf("sirul este=");
				gets(sir);
				if ((sir[0]<'A') || (sir[0]>'Z'))
					ok++;
				 else 
				{
					ok == 0;
					break;
			     }
				
			} while (ok); //ok==1
			break;
		case 2:
			printf("%s", sir);
			break;
		case 3:
			getchar();
			printf("dati un caracter=");
			scanf("%c", &car);
			for (i = 0; i < strlen(sir); i++)
			{
				if (sir[i] == car)
					contor++;
			}
			printf("caracterul dat de la tast %c apare de %d ori", car, contor);

				break;
		case 4:
			j = 0;
			for (i = strlen(sir) - 1; i >= 0; i--) //-1 sanu incepem de la termiantorul de sir
			{
				sir2[j]=sir[i];
				j++;
			}
			sir2[j] = '\0'; //sa nu uitam sa adaugam terminatorul de sir
			printf("%s\n", sir2);
				break;
		case 5:
			j = 0;
			for (i = strlen(sir) - 1; i >= 0; i--) //-1 sanu incepem de la termiantorul de sir
			{
				sir2[j] = sir[i];
				j++;
			}
			sir2[j] = '\0'; //sa nu uitam sa adaugam terminatorul de sir
			if (strcmp(sir, sir2) == 0)
				printf("e sirul palindrom %s",sir);
	
			else
			{
				printf("nu e sirul palindrom %s", sir);
				for (i = strlen(sir) - 1; i >= 0; i--)
				{
					printf("*");
				}
			}
			printf("\n");
			break;
		case 6:
			vocale = 0;
			consoane = 0;
			cifre = 0;
			spatii = 0;
			for (i = 0; i < strlen(sir); i++)
			{
				if ((sir[i] == 'a') || (sir[i] == 'e') || (sir[i] == 'i') || (sir[i] == 'o') || (sir[i] == 'u') ||
					(sir[i] == 'A') || (sir[i] == 'E') || (sir[i] == 'I') || (sir[i] == 'O') || (sir[i] == 'U'))
					vocale++;
				else if ((sir[i] > 'a') && (sir[i] < 'z') || (sir[i] > 'A') && (sir[i] < 'Z'))
					consoane++;
				else if ((sir[i] == ' '))
					spatii++;
				else if ((sir[i] > '0') || (sir[i] < '9'))
					cifre++;
			}
			printf("\n");
			printf("nr de voc,cons,spatii,cifre este %d,%d,%d,%d", vocale, consoane,spatii, cifre);
			break;
		case 7:
			j = 0;
			for (i = 0; i < strlen(sir); i++)
			{
				if (!(sir[i] >= 'a' && sir[i] <= 'z') && !(sir[i] >= 'A' && sir[j] <= 'Z'))
				{
					for (j = i; j < strlen(sir)-1; j++)
					{
						sir[j] = sir[j + 1];
					}
					sir[j] = '\0';
					i--;
				}
			}
			printf("%s", sir);
			break;
		case 0:
			exit(0);
		default:printf("opt grs");
			break;
		}
	}//}while(1);
	system("pause");

	return 0;
}