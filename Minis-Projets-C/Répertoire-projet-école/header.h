#ifndef MON_FICHIER_ /* L'écriture ici présente n'est pas universelle */
#define MON_FICHIER_ /* Edit suite aux corrections des posts suivants -> */
/*Il est conseillé d'utiliser MON_FICHIER : pas de underscore au début */
 
/* Tu places ici les prototypes de tes fonctions */
 
FILE *fp, *fptmp, *fpo;
char choix, nom[50], prenom[50], am[50], l, name[50], lname[50], adr[50];
int i, x=0, z, j, k;

void a(){
	fp = fopen("ID.txt", "w+");
	fscanf(fp, "%d", &z);
	z = z+1;
	fprintf(fp, "%d", z);
	fclose(fp);
	fp = fopen("base.txt", "a");
	fpo = fopen("base-save.txt", "a");
	fprintf(fp, "%d ", z+1);
	fprintf(fpo, "%d ", z+1);
	puts("Nom: ");
	scanf("%s", &l);
	fprintf(fp, "%s ", &l);
	fprintf(fpo, "%s ", &l);
	puts("Prenom: ");
	scanf("%s", &l);
	fprintf(fp, "%s ", &l);
	fprintf(fpo, "%s ", &l);
	puts("Telephone: ");
	scanf("%d", &i);
	fprintf(fp, "%d ", i);
	fprintf(fpo, "%d ", i);
	puts("Adresse mail: ");
	scanf("%s", &l);
	fprintf(fp, "%s \n", &l);
	fprintf(fpo, "%s \n", &l);
	fclose(fp);
	fclose(fpo);
}
void b(){
	fp = fopen("base.txt", "r");
	i=0;
	printf("	id	|");
	printf("	Nom	|");
	printf("	prenom	|");
	printf("	numero		|");
	printf("	mail	\n");
	puts("-----------------------------------------------------------------------------------------------------------");
	for (i=0; i<z; i++){
		fscanf(fp, "%d", &j);
		fscanf(fp, "%s", &name);
		fscanf(fp, "%s", &lname);
		fscanf(fp, "%d", &k);
		fscanf(fp, "%s", &adr);
		nom[i]=name;
		prenom[i]=lname;
		am[i]=adr;
		printf("	%d	|", j);
		printf("	%s	|", name);
		printf("	%s	|", lname);
		printf("	0%d	|", k);
		printf("	%s	\n", adr);
		puts("-----------------------------------------------------------------------------------------------------------");
	}
	fclose(fp);
}
void c(){
	fp = fopen("base.txt", "r");
	i=0;
	puts("donnez un entr?e");
	scanf("%d", &x);
	if(x>z || x<0){
		printf("Contact introuvable");
	}
	else{
		printf("	id	|");
		printf("	Nom	|");
		printf("	prenom	|");
		printf("	numero		|");
		printf("	mail	\n");
		puts("-----------------------------------------------------------------------------------------------------------");
		for (i=0; i<x; i++){
			fscanf(fp, "%d", &j);
			fscanf(fp, "%s", &name);
			fscanf(fp, "%s", &lname);
			fscanf(fp, "%d", &k);
			fscanf(fp, "%s", &adr);
		}
		printf("	%d	|", j);
		printf("	%s	|", name);
		printf("	%s	|", lname);
		printf("	%d	|", k);
		printf("	%s	\n", adr);
		puts("-----------------------------------------------------------------------------------------------------------");
		fclose(fp);
	}			
}
void d(){
	fp = fopen("base.txt", "r");
	fpo = fopen("ID.txt", "r");
	fscanf(fpo, "%d", &z);
	fclose(fpo);
	i=0;
	puts("donnez un entrÃ©e");
	scanf("%d", &x);
	for (i=0; i<z; i++){
		fscanf(fp, "%d", &j);
		fscanf(fp, "%s", &name);
		fscanf(fp, "%s", &lname);
		fscanf(fp, "%d", &k);
		fscanf(fp, "%s", &adr);
		if(i>x-1 && i<z){
			fprintf(fptmp, "%d ", j-1);
			fprintf(fptmp, "%s ", name);
			fprintf(fptmp, "%s ", lname);
			fprintf(fptmp, "%d ", k);
			fprintf(fptmp, "%s \n", adr);
		}
		if(i<x-1 && i>=0){
			fprintf(fptmp, "%d ", j);
			fprintf(fptmp, "%s ", name);
			fprintf(fptmp, "%s ", lname);
			fprintf(fptmp, "%d ", k);
			fprintf(fptmp, "%s \n", adr);
		}
	}
	fpo = fopen("ID.txt", "w+");
	fclose(fp);
	fclose(fptmp);
	fp = fopen("base.txt", "w");
	fptmp = fopen("base-tmp.txt", "r");
	for (i=0; i<z-1; i++){
		fscanf(fptmp, "%d", &j);
		fscanf(fptmp, "%s", &name);
		fscanf(fptmp, "%s", &lname);
		fscanf(fptmp, "%d", &k);
		fscanf(fptmp, "%s", &adr);
		fprintf(fp, "%d ", j);
		fprintf(fp, "%s ", name);
		fprintf(fp, "%s ", lname);
		fprintf(fp, "%d ", k);
		fprintf(fp, "%s \n", adr);
	}
	fclose(fp);
	fclose(fptmp);
	fscanf(fpo, "%d", &z);
	z = z - 1;
	fprintf(fpo, "%d", z);
	fp = fopen("base.txt", "r");
	printf("	id	|");
	printf("	Nom	|");
	printf("	prenom	|");
	printf("	numero		|");
	printf("	mail	\n");
	puts("-----------------------------------------------------------------------------------------------------------");
	for (i=0; i<z; i++){
		fscanf(fp, "%d", &j);
		fscanf(fp, "%s", &name);
		fscanf(fp, "%s", &lname);
		fscanf(fp, "%d", &k);
		fscanf(fp, "%s", &adr);
		printf("	%d	|", j);
		printf("	%s	|", name);
		printf("	%s	|", lname);
		printf("	0%d	|", k);
		printf("	%s	\n", adr);
		puts("-----------------------------------------------------------------------------------------------------------");
	}
	fclose(fpo);
	fclose(fp);
}
void e(){
	fp = fopen("base.txt", "w");
	fprintf(fp, "");
	printf("Repertoire supprime !");
	fclose(fp);
	fp = fopen("ID.txt", "w");
	fprintf(fp, "0");
	fclose(fp);
}
#endif
