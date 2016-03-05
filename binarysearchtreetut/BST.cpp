// Binary search tree implementation
// author: Rutul Amin@3.3.2016


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

void BST::PrintInOrder(){
	PrintInOrderPrivate(root);
}

void BST::PrintInOrderPrivate(node* Ptr){
	if(root != NULL){
		if(Ptr->left != NULL){
			PrintInOrderPrivate(Ptr->left);
		}
		cout<< Ptr->key <<" "; 
		if(Ptr->right != NULL){
			PrintInOrderPrivate(Ptr->right);
		}
	}
	else{
		cout<< " The tree is Empty\n";
	}

}

BST::node* BST::ReturnNode(int key){
	return ReturnNodePrivate(key, root);
}

BST::node* BST::ReturnNodePrivate(int key, node* Ptr){
	if(Ptr != NULL){
		if(Ptr->key == key){	// If the key that the pointer points is equal to the key that we want to find then simply return the pointer.
			return Ptr;
		}
		else{
			if(key < Ptr->key){		// If the key is smaller than the current key that the pointer is pointing then go left and recursivel y call teh returnNodePrivater function until the key is found..
				return ReturnNodePrivate(key, Ptr->left);
			}
			else{
				return ReturnNodePrivate(key, Ptr->right);
			}
		}
	}
	else{
		return NULL;
	}
}

int BST::ReturnRootKey(){
	if( root != NULL){
		return root->key;
	}
	else{
		return -1000;
	}
}

void BST::PrintChildren(int key){
	node* Ptr = ReturnNode(key);   // will return the ptr of the key that was passed as the parameter

	if(Ptr != NULL){
		cout<< "Parent Node="<< Ptr->key<< endl;

		Ptr->left == NULL? 									// Using the conditional operator for left side instead of using if..else 's'
		cout<<"Left Child = NULL"<<endl : 
		cout<< "Left Child =" << Ptr->left->key << endl;

		Ptr->right == NULL?									// Using the conditional operator for right side instead of using if..else 's'
		cout<<" Right Child = NULL"<<endl :
		cout<< " Right Child =" << Ptr->right->key << endl;
	}
	else{
		cout<< " The key" << key << "is not present in the tree";
	}
}

int BST::FindSmallest(){
	return FindSmallestPrivate(root);
}

int BST::FindSmallestPrivate(node* Ptr){
	if(root == NULL){
		cout<<"The tree is empty"<< endl;
		return -1000;
	}
	else{									
		if(Ptr->left != NULL){						// The smallest is always on the left side of the tree(following the greater on right of and smaller on left of root node rule)
			return FindSmallestPrivate(Ptr->left);
		}
		else{
			return Ptr->key;
		}
	}
}

int BST::FindLargest(){
	return FindLargestPrivate(root);
}

int BST::FindLargestPrivate(node* Ptr){
	if(root == NULL){
		cout<< " The Tree is empty"<< endl;
		return -1000;
	}
	else{
		if(Ptr->right != NULL){
			return FindLargestPrivate(Ptr->right);
		}
		else{
			return Ptr->key;
		}
	}
}

void BST::RemoveNode(int key){
	return RemoveNodePrivate(int key, root);	
}


void BST::RemoveNodePrivate(int key, node* parent){
	if(root!= NULL){

		if(root-> key == key){
			RemoveRootMatch();
		}
		else{
			if(key < parent->key && parent->left != NULL){
				parent->left->key == key?				// conditional operator instead of if..else
				RemoveMatch(int key, parent->left, true):
				RemoveNodePrivate(int key, parent->left);
			}
			else if(key > parent->key && parent->right != NULL){
				parent->right->key == key?				// conditional operator instead of if..else
				RemoveMatch(int key,parent->right,false):
				RemoveNodePrivate(int key, parent->right);
			}
			else{
				cout<<" The key"<< key <<"was not found in the tree"<<endl;
			}
		}
	}
	else{
		cout<<" The tree is empty"<<endl;
	}
}


void BST::RemoveRootMatch(){
	if(root!= NULL){
		// We are taking three variables to store values of keys
		node* delPtr = root;
		int rootKey = root->key;
		int smallestInRightSubtree;

		// CASE 1 with no children
		if(root->left == NULL && root->right == NULL){
			root == NULL;
			delete deletePtr;
		}

		// CASE 2 with only one children
		else if(root->left == NULL && root->right != NULL){		// with only root pointing to just right and no left
			root= root->right;
			deletePtr->right = NULL;
			delete deletePtr;
			cout<<" The root node with key"<< rootKey<<"was deleted."<< "The new root now contains the key"<< root->key << endl;
		}


		else if(root->left != NULL && root->right == NULL){			// with only root pointing to just the left and no right
			root= root->left;
			deletePtr->left = NULL;
			delete deletePtr;
			cout<< " The root node with key"<< rootKey<<" was deleted."<<"Th new root now contains the key"<< root->key << endl;
		}

		// CASE 3 with two children
		else{
			smallestInRightSubtree = FindSmallestPrivate(root->right);
			RemoveNodePrivate(smallestInRightSubtree, root);
			root-> key = smallestInRightSubtree;
			delete deletePtr;
			cout<<" The root with the key"<< rootKey<< "was overwritten with key"<< root->key<< endl;
		}

	}
	else{
		cout<< "The tree is empty"<<endl;
	}
}












