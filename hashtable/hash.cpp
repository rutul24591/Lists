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

int hashtable::Hash(string key){

	// table size is 100
	//we enter key as 453.. so what we do is 453/100   quotient 4  remainder 53.... we use remainder 53 to return our index value.	

	int hash = 0;
	
	int index;


	index = key.length();

 
	for(int i=0; i< key.length();i++){
		hash = (hash + (int)key[i])*13;
		
		// cout<< hash<< endl;
		//cout<<"The value of hash = " << hash << endl;   // uncommenting this line will display ascii for each letter of each of the names specified
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
	 	 Ptr->next =n;
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

void hashtable::PrintTable(){
	int number;
	for(int i=0; i< tableSize; i++){
		number= NumberOfItemsInIndex(i);
		cout<< "---------------------------------------------\n";
		cout<< "index: " << i  << endl;
		cout<< HashTable[i] -> name << endl;
		cout<< HashTable[i] -> drink << endl;
		cout<<" # of items: " << number << endl; 
		cout<< "---------------------------------------------\n";
	}
}


void hashtable::PrintItemsInIndex(int index){


	item* Ptr = HashTable[index];

	if(Ptr->name == "empty"){
		cout<<" Index =" << index << " is empty"<< endl;
	}else{
		cout<< " Index "<< index << " contains the following items\n";

		while(Ptr != NULL){
			cout<< " ------------------------\n";
			cout<< Ptr->name << endl;
			cout<< Ptr->drink << endl;
			cout<< "-------------------------\n";

			Ptr = Ptr->next;
		}		
	} 
}

void hashtable::FindDrink(string name){

	int index = Hash(name);
	bool foundName = false;
	string drink;

	item* Ptr = HashTable[index];
	while(Ptr!= NULL){
		if(Ptr->name == name){
			foundName = true;
			drink = Ptr->drink;
		}
		Ptr = Ptr->next;
	}

	if(foundName == true){
		cout<< " Favorite drink of "<< name << " is : "<< drink << endl;
	}
	else{
		cout<< name<< "'s drink was not found in the hash table.\n";
	}
}


// Reomve Item section

void hashtable::RemoveItem(string name){

	int index= Hash(name);

	item* delPtr;
	item* P1;
	item* P2;

	// Case 0-- Bucket is empty
		if(HashTable[index]-> name == "empty" && HashTable[index]-> drink =="empty"){
			cout<< name << " was not found in the Hash table\n";
		}


		//Case 1- Only 1 item contained in bucket and that item has matching name

		else if(HashTable[index]->name == name && HashTable[index]->next == NULL){
			HashTable[index]->name = "empty";
			HashTable[index]->drink ="empty";

			cout<< name<< " was removed from the hash table"<< endl;
		}

		// Case 2- Match found in the first location in the bucket but there are more items in the bucket
		else if(HashTable[index]-> name == name){
			delPtr = HashTable[index]; 
			HashTable[index]= HashTable[index]->next;
			delete delPtr;

			cout<< name<< " was removed from the hash table" <<endl;
		}


		// Case 3 Bucket contains items but first item is not the match
		else{
			P1= HashTable[index]->next;
			P2 = HashTable[index];

			while(P1 != NULL && P1->name != name){
				P2= P1;
				P1= P1->next;

				// Case 3.1-- no match
				if(P1 == NULL){
					cout<< name <<" was not found in the hash table\n";
				}
				//Case 3.2-- Match found
				else{
					delPtr = P1;
					P1= P1->next;
					P2->next = P1;
					delete delPtr; 
					cout<< name << " was found an removed from the hash table \n" ;
				}
			}
		}
		


}

























