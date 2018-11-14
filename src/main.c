//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"

int main(void)
{
	short int resultat; 
	unsigned int score = 0;
	
	resultat = LancerDe ();
	
	while (resultat != 1) {
		
		if (resultat==2 || resultat==4 || resultat==6) 
			score = score + resultat;
		
		else if (resultat==3)
			score = score*2;
		
		else
			score = score - 2;
		
		
		resultat = LancerDe ();
	}
	
    return 0;
}