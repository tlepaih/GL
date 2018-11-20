//  Copyright (c) 2018 Antoine Tran Tan
//


#define SEUIL 50
#define SEUILH 200
#define SEUILB -100

int main(void)
{
	 unsigned char bin[10] = {20,40,60,5,94,146,23,68,16,200};
	 int sat[10] = {rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand()}; 
	 unsigned char i,j;
	 
	 for (i=0; i<10; i=i+1)
	 {
		 if (bin[i] > SEUIL)
			 
			 bin[i]=1;
		 
		 else
			 
			 bin[i]=0;
	 }
	
	 for (j=0; j<10; j=j+1)
	 {
		 if (sat[i] > SEUILH)
			 sat[i] = SEUILH;
		 
		 else if (sat[i] < SEUILB)
			 sat[i] = SEUILB;
		 
		 else
	 }
	 
	 
	 
	 
	 
	 
    return 0;
}
