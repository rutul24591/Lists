#include <iostream>
#include <cstdlib>

#include "BST.h"

using namespace std;


BST::BST(){

	root= NULL;   // When new binary search object is created the root node value must be NULL
}

BST:: node* BST::CreateLeaf(int key){   // WE need to put BST in front of node* as node is not in the scope of the function CreateLeaf and thus we define BST to mention that the node* belongs to the class BST(). 

node* n = new node;
n->key= key;    // The key to the left is the key of node and to right is the key that we are passing to the function.
n->left = NULL;
n-> right= NULL;

return n;
}

void BST::AddLeaf(int key){    // AddLeaf will be called from the main function. THe Main task of AddLeaf function is to simply call AddLeafPrivate method.

	AddLeafPrivate(key,root);

}
void BST::AddLeafPrivate(int key, node* Ptr){
	{
		if(root == NULL){
			root = CreateLeaf(key);
		}
		else if(key < Ptr->key){
			if(Ptr-> left != NULL){      // Check if a left node exists and if so it will recursively call the addleafprivate to move further down the tree until the ptr->left points to NULL
				AddLeafPrivate(key, Ptr->left); 
			}
			else{
				Ptr->left = CreateLeaf(key);  // ptr->left== null is found and so add the node at this position.
			}
		}
		else if(key > Ptr->key){
			if( Ptr->right != NULL){
				AddLeafPrivate(key, Ptr->right);
			}
			else{
				Ptr->right = CreateLeaf(key);
			}
		}
		else{
			cout<< " The key"<< key <<" has already been added to the tree\n";
		}
	}
}