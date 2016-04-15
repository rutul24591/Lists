#include <iostream>
#include <cstdlib>
#include <string>

#include "hash.cpp"

using namespace std;


int main(int argc, char** argv){

	int index;

	hashtable hashObj;

	index = hashObj.Hash("rutulamin");

	cout<< "The index value is: "<<index<< endl;

	return 0;
}