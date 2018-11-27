//  Copyright (c) 2018 Antoine Tran Tan
//

#include "TP_lib_suite.h"
#include "biblio58.h"


int main(void)
{
	unsigned char k, meilleur_score = 0,a;
	
	
	for (k=0; k<100; k++)
	{
		a = test_score();
		
		if (a>meilleur_score)
			meilleur_score = a;
		
		if (meilleur_score == 6)
			k=100;
	}	
	
	
	
	
	
    return 0;
}
