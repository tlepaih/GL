//  Copyright (c) 2018 Antoine Tran Tan
//

#include <userint.h>
#include <ansi_c.h>

int main(void)
{
	char nom[20], prenom[20],phrase[50];
	unsigned long annee_naissance,annee_actuelle, age;
	
	printf("Entrer votre nom:");
	scanf("%s",nom);
	
	printf("Entrer votre prenom:");
	scanf("%s",prenom);
	
	printf("Entrer votre annee de naissance:");
	scanf("%lu",&annee_naissance);
	
	printf("Entrer l'annee actuelle:");
	scanf("%lu",&annee_actuelle);
	
	age = annee_actuelle - annee_naissance;
	
	sprintf(phrase,"Je m'appelle %s %s et j'ai %lu ans.",prenom,nom,age); 
	MessagePopup("Identite de l'utilisateur",phrase);
	
    return 0;
}
