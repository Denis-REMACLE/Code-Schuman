#include <stdio.h>
#include <string.h>
#include "header.h"

int main(void)
{
	system("title Gestion de repertoire");

	fp = fopen("ID.txt", "r");
	fptmp = fopen("base/base-tmp.txt", "w+");
	fscanf(fp, "%d", &z);
	fclose(fp);
	puts("(a) Ajouter une personne dans le repertoire");
	puts("(b) Afficher le r?pertoire");
	puts("(c) Recherche d'une personne (id)");
	puts("(d) Supprimer personne du repertoire");
	puts("(e) Supprimer le repertoire entier");
	puts("(x) ne rien faire");
	choix = getchar();
	getchar();

	switch(choix)
	{
		case 'a':
				system("cls");
				system("title Ajout d'une personne");
				system("color a");
				a();
				break;

		case 'b':
				system("cls");
				system("title Affichage du repertoire");
				system("color a");
				b();
				break;

		case 'c':
				system("cls");
				system("title Recherche personne (id)");
				system("color a");
				c();
				break;
		case 'd':
				system("cls");
				system("color c");
				system("title Supprimer un contact");
				d();
				break;

		case 'e':
				system("cls");
				system("color c");
				system("title Supression du repertoire ENTIER");
				system("echo SI c'est une erreur fermez cette fenetre, sinon appuyer sur entree");
				system("pause");
				e();
				break;
		case 'x':
				system("cls");
				system("color c");
				system("title ERRRERUURUERUEURUEURUERUEURUEURUE 404");
				system("echo ERREUR");
				system("pause");
				break;
		default :
				system("cls");
				system("color c");
				system("title WTF");
				system("echo wooops vous vous etes trompé de bouton");
				system("pause");
				break;
	}
	return 0;
}//Code : Chritopher HOSTIN et Denis REMACLE
