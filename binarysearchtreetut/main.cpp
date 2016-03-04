#include <iostream>
#include <cstdlib>

#include "BST.cpp"

using namespace std;

int main(){

	int TreeKey[20]={50,76,21,4,32,64,51,15,14,100,83,2,3,70,89,80};
	BST myTree;   // Create new object

	cout<< "Printing the tree in order\n Before adding any numbers\n";

	myTree.PrintInOrder();

	for(int i=0;i<16;i++){
		myTree.AddLeaf(TreeKey[i]);
	}

	cout<< "Printing the tree in order\n after adding any numbers\n";

	myTree.PrintInOrder();\

	cout<< "" << endl;

	return 0;
}