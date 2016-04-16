#include <iostream>
#include <cstdlib>
#include <string>

#include "hash.cpp"

using namespace std;


int main(int argc, char** argv){

	// int index;

	// hashtable hashObj;

	// index = hashObj.Hash("rutulamin");

	// cout<< "The index value is: "<<index<< endl;

	hashtable Hushy;   // new object

	Hushy.AddItem("Shivam","Chivas on the rocks");

	Hushy.AddItem("Jay","Jim Beam pachi Hennesey");

	Hushy.AddItem("Yash","Koi pan whiskey with beer mix");

	Hushy.AddItem("Neel","Kai pan chale with phone and headphones");

	Hushy.AddItem("Savan","Chivas pan red bull to joiyej");

	Hushy.AddItem("Parth","any drink with loud music");

	Hushy.AddItem("Rutul","Budweisser 12pack to occha pade");

	Hushy.AddItem("Meet","Coke pan rutul khavanu to banay");

	Hushy.AddItem("Sangeet","Eni mane aaje to pidha pachi hu sidho chalish");

	Hushy.AddItem("Harsh","Aje to red bull pivani");

	Hushy.AddItem("Yudi","Aje to red bull pivani");

	Hushy.AddItem("Mohit","Chutayaoo ne party karva de hu mari kobi bateka banau");

	Hushy.PrintTable();





	return 0;
}