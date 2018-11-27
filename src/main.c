//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
#include "TP_lib_suite.h"
#define N 6

int main(void)
{
	unsigned char joueur[N] = {12,3,6,24,42,33}, gagnante[N] = {7,22,41,3,12,37};
	unsigned char i,j, score=0;
	
	
	for (j=0; j<N; j++)
	{
		for (i=0; i<N; i++)
		{
			if (gagnante[j] == joueur[i])
				score++;
	
		}					  
	}
	
	
	
	
    return 0;
}
