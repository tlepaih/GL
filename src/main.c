//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h> 

int main(void)
{
  unsigned char n=2,i=0, h=0, c=1;
  int a;
  unsigned int s1=3, s2=3, s3=0, s4=0;

//question 1
  while(n<12) {
	  
    s1=s1+3*n;
    n=n+1;
	}

//question 2
	
  n=2;
	
  while(s2<9876)
   {
    s2=s2+3*n;
    n=n+1;
   }

//question 3
   
   while (i<12){
    
	a = (rand()%10)+1;
	s3 = s3 + a;
	i = i+1;
   }   

//question 4
	
	while (h<20){
		
		if (c%3 == 0 || c%7 == 0){
			s4 = s4 + c;
			c = c+1;
			h = h+1;
		}
		else	
			c = c+1;
	}
 return 0;
}