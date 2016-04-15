#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

#include "hash.h"

hashtable::hashtable(){			// this contructor just sets the tablesize to 100
	tableSize = 100;
} 

int hashtable::Hash(string key){

	// table size is 100
	//we enter key as 453.. so what we do is 453/100   quotient 4  remainder 53.... we use remainder 53 to return our index value.	

	int hash = 0;
	int index;


	index = key.length();


	for(int i=0; i< key.length();i++){
		hash = hash + (int)key[i];
		cout<<"The value of hash = " << hash << endl;
	}

	index = hash % tableSize;      // for getting the remainder as our index value;
		// cout<<"key[0]: "<< key[0]<<endl;
		// cout<<"key[1]: "<< key[1]<<endl;
		// cout<<"key[2]: "<< key[2]<<endl;
		// cout<<"key[3]: "<< key[3]<<endl;
		// cout<<"key[4]: "<< key[4]<<endl;

		// cout<<"key[0]: "<<(int) key[0]<<endl;
		// cout<<"key[1]: "<<(int) key[1]<<endl;
		// cout<<"key[2]: "<<(int) key[2]<<endl;
		// cout<<"key[3]: "<<(int) key[3]<<endl;
		// cout<<"key[4]: "<<(int) key[4]<<endl;

	return index;

}