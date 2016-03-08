/*
		 *
		***
  	   *****
	  *******
	 ********* 	
*/


#include <iostream>
//#include <conio.h>
#include <cstdlib>

using namespace std;

int main(){

int i,j,k;		

for(i=1; i<=5; i++){			// This loop(i) is used for length from top to bottom

	for(j=4; j>=i; j--){		// This loop(j) is used to provide space after which we want to start printing *
	
		cout<< " ";
	
	}
	
	for(k=1; k<=(2*i)-1;k++){		// This loop(k) is used to measure the width from left to right and to print *
	
		cout<<"*";
	}

cout<<"\n";						// for i=1,k=1	  _ _ _ _ * \n
								// for i=2,k=3	  _ _ _ * * * \n
	}
 
}



