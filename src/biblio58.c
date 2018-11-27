#include "biblio58.h"
#include "TP_lib_suite.h"

#define N 6

unsigned char test_score(void)
{
	short joueur[N] = {12,3,6,24,42,33}, gagnante[N];
	unsigned char i,j, score=0;
	
	initialiserTirage();
	
	for (j=0; j<N; j++)
	{
	   gagnante[j] = tirerNumero();
	}	
	
	
	for (j=0; j<N; j++)
	{
		for (i=0; i<N; i++)
		{
			if (gagnante[j] == joueur[i])
				score++;
	
		}					  
	}
	
	
	
    return score;
}
