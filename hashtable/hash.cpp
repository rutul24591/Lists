#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

#include "hash.h"

hashtable::hashtable(){			// this contructor just sets the tablesize to 10
	for(int i =0; i< tableSize; i++){
		HashTable[i] = new item;
		HashTable[i] -> name= "empty";
		HashTable[i] -> drink= "empty";
		HashTable[i] -> next = NULL;
	}
} 

int hashtable:: Hash(string key){

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

void hashtable::AddItem(string name,string drink){
	int index= Hash(name);			// calls the Hash function that return the index where the name is to be stored
	 if(HashTable[index]-> name == "empty"){
	 	HashTable[index]->name = name;
	 	HashTable[index]->drink = drink;
	 }else{
	 	 item* Ptr = HashTable[index];
	 	 item* n = new item;
	 	 n->name= name;
	 	 n->drink =drink;
	 	 n->next = NULL;
	 	 while(Ptr->next != NULL){
	 	 	Ptr= Ptr->next;
	 	 }
	 	 Ptr->next=n;
	 }
}

int hashtable::NumberOfItemsInIndex(int index){
	int count =0;

	if(HashTable[index]-> name == "empty"){
		return count;
	}else{
		count++;   // count=1 for index item
		item* Ptr = HashTable[index];

		while(Ptr->next != NULL){
			count++;
			Ptr= Ptr->next;
		}
	}
	return count;
}



























