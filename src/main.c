//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
#include "my_header.h"

#define N 6

int main(void)
{
	unsigned char joueur[N] = {12,3,6,24,42,33}, gagnante[N] = {7,22,41,3,12,37};
	unsigned char a=0,i, score=0;
	
	
	while (a!=6)
	{
		for (i=0, i<N, i++)
		{
			if (gagnante[a] == joueur[i])
				score++;
	
			else
				a++;
		}					  
	}
	
	
	
	
    return 0;
}
