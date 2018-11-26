#include <stdlib.h>

#define SEUIL 50
#define SEUILH 500
#define SEUILB -500
#define N 6


int main(void)
{
	 unsigned char i;
	 unsigned char bin[10] = {20,40,60,5,94,146,23,68,0,200};
	 int sat[10] = {rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384}; 
	 unsigned char dist[10] = {68,49,27,129,200,12,94,163,0,50};
	 int a[N]; 
	 int b[N];
	 char miroir[N] = {1,3,5};
	 
	 for (i=0; i<10; i=i+1)
	 
	 {
		 if (bin[i] > SEUIL)
			 
			 bin[i]=1;
		 
		 else
			 
			 bin[i]=0;
	 }
	
	 for (i=0; i<10; i=i+1)
	 
	 {
		 if (sat[i] > SEUILH)
			 
			 sat[i] = SEUILH;
		 
		 else if (sat[i] < SEUILB)
			 
			 sat[i] = SEUILB;
		 
	 }
	 
	 for (i=1; i<10; i=i+1)
	 
	 {
		 if (dist[i] != 0)
		 {
			 if (dist[i] > dist[i-1])
				 
				 dist[i] = dist[i] - dist[i-1];
			 
			 else
				 
				 dist[i] = dist[i-1] - dist[i];
		 }
		 
	  }
	 
	 for (i=0; i<N; i=i+1) {
		  
		  a[i] = (rand()%20);
	  }
	
	  
	 for (i=0; i<N; i=i+1) {
		  
		  b[i] = a[N-i-1];
		  
	  }
	 
	 for (i=0; i<(N/2); i=i+1)
	 {
		 miroir[N-i-1] = miroir[i];
	 }
			 
     return 0;
}
