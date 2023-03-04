/* st0  st1  st2  st3  st4   
 nume0  nm1  nm2  nm3  nm4
 index0 i1   i2   i3   i4
 nota0  nt1  nt2  nt3  nt4*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
	int nota;
	char nume[20];
}S;

void citire_student(S *s, int *n)  //pasam vectorul de studenti, si avem nevoie de o var*n sa retina cati studenti avem
{
	(*n)++;   //n u creste la fiecare citire(adica studentii),contorizam cati studenti avem
	printf("nume=");
	scanf("%s", (s +*n)->nume);   //s[n].nume NU, accesam prin pointeri cu ->
	printf("nota=");
	scanf("%d", &(s + *n)->nota);
}

void afisare_student(S *s, int n)     //aici n u nu si schimba valoare deci lasam n simplu
{
	int i;
	for (i = 0; i <= n; i++)  //<= ca sa l ia si pe ultimul student
		printf("nume=%s, nota=%d\n", (s + i)->nume, (s + i)->nota);  //s[i].nota ffindca nu avem aici pointeri
}

void sortare_student(S *s, int n)   //sortam studentii alfabetic, n nu se modifica
{
	int i,k;
	S aux; //declaram o var de tip S
	do 
	{
		k = 1;   //plecam de la prezumtia de adevarat;
		for (i = 1; i < n; i++)    //plecam de la al doilea st
			if (strcmp((s + i - 1)->nume, (s + 1)->nume)> 0)
			{
				  aux=*(s+i);       
				 *(s+i)=*(s+i-1);
				 *(s + i - 1)=aux;
				 k=0;
			}
	} while (!k);
}

int main()
{
	//am declarat un v de 20 studenti tipul de data S care e struc->student
	S s[20];
	int n = -1;  //plecam ori de la -1 dc citim 20 ,10..studenti , -1 fiindca altfel nu l ar lua pe primu student, ori 0 dar in forul de mai sus plecam de la 1 si nu 0
	enum meniu{iesire,citire,afisare,sortare}opt;
	do {
		printf("\n0.iesire\n");
		printf("1.citire=\n");
		printf("2.afisare=\n");
		printf("opt ta=");
		scanf("%d", &opt);
		switch (opt)
		{
		case iesire:
			exit(0);
		case citire: citire_student(s, &n);
			break;
		case afisare: afisare_student(s, n);  //n u nu mai e adresa
			break;
		case sortare: sortare_student(s, n);
			          afisare_student(s, n);
			break;
		default:printf("opt grs");
			break;
		}
	} while (1);
	system("pause");
	return 0;
}