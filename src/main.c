//  Copyright (c) 2018 Antoine Tran Tan
//

#include <userint.h>
#include <ansi_c.h> 

int main(void)
{
	char ligne1[50] = "Nom: pentagone_B";
	char ligne2[50] = "Nb points: 5";
	char ligne3[80] = "Coordonnees: 1 2 1 2 3 5 2 6 4 3";
	char erreur[50],caracteristiques[50];
	
	char i,a=1;
	char nom_fig[20]; 
	unsigned long x[5]={0,0,0,0,0}, y[5]={0,0,0,0,0};
	unsigned long nb_pts;
	
	sscanf(ligne1,"%*s %s", nom_fig);
	sscanf(ligne2,"%*s %*s %u", &nb_pts);
	sscanf(ligne3,"%*s %u %*u %u %*u %u %*u %u %*u %u %*u", &x[0],&x[1],&x[2],&x[3],&x[4]);
	sscanf(ligne3,"%*s %*u %u %*u %u %*u %u %*u %u %*u %u", &y[0],&y[1],&y[2],&y[3],&y[4]);
	
	for(i=0;i<5;i++)
	{
		if(x[i]==0||y[i]==0)
				a=0;
	}
	
	
	if(a==0)
	{
		sprintf(erreur,"Coordonnee(s) manquante(s)");
		MessagePopup("Erreur",erreur);
	}
	else
	{
		sprintf(caracteristiques,"La figure %s possède %u sommets.",nom_fig,nb_pts);
		MessagePopup("Caractéristiques de la figure:",caracteristiques);
	}
	
    return 0;
}
