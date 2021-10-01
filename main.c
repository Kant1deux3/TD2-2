#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	//Déclaration des variables
	int nb;
	int tabr[8];
	int i;
	char rec;

	//Boucle de répétition du programme
	do
	{

		//Invitation et lecture
		do
		{
			printf("Donnez un nombre entre 0 et 255.\n");
			scanf("%d", &nb);
		}
		while(nb<0||nb>255);


		//initialiser la valeur du tableau à 0
		i=0;
		for (i=0; i<9; i++)
		{
			tabr[i]=0;
		}

		i=0;

		//Effectuer les calculs et afficher les divisions successives
		do
		{
			tabr[i]=nb%2;
			nb=nb/2;
			i=i+1;

		}while(nb!=0);


		//Afficher le résultat
		printf("Le résultat binaire est %d%d%d%d%d%d%d%d",tabr[7], tabr[6], tabr[5], tabr[4], tabr[3], tabr[2], tabr[1], tabr[0]);

		printf("\nVoulez-vous recommencer ?\n");
		scanf("%s", &rec);
	}while(rec !='n');
  printf("\nFin");
	return 0;

}
