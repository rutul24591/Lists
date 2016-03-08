/*

	*	
	***	
	*****
	*******
	*********
*/


#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

int i,k;		

for(i=1; i<=5; i++){			// This loop(i) is used for length from top to bottom

	for(k=1; k<=(2*i)-1;k++){		// This loop(k) is used to measure the width from left to right and to print *
	
		cout<<"*";
	}

    cout<<"\n";
   }
 
}
