//
//  main.cpp
//  binaryTree
//
//  Created by Rutul Amin on 8/6/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>

using namespace std;

struct node{
    
    int data;
    node* left;
    node* right;
};

node* insert(node* root, int data);
node* getNewNode(int data);
bool search(node* root,int data);
void preOrderPrint(node* root);
void postOrderPrint(node* root);
void inOrderPrint(node* root);
void destroyTree(node* root);
int countNodes(node* root);


node* getNewNode(int data){

    node* n= new node();
    n-> data = data;
    n-> left = NULL;
    n-> right = NULL;
    return n;

}



node* insert(node* root, int data){

    if(root == NULL){
         root= getNewNode(data);
    }else if(data <= root->data){
        root->left = insert(root->left, data);
    }else{
        root->right = insert(root->right,data);
    }
    return root;
}


bool search(node* root, int data){

    if( root == NULL){
        return false;
    }else if(root->data == data){
        return true;
    }else if( data <= root->data){
        return search(root->left, data);
    }else{
        return search(root->right, data);
    }

}


void preOrderPrint(node* root){
    if( root != NULL){
        cout << root -> data << "\n"<< endl;
         preOrderPrint( root->left );
         preOrderPrint( root->right );
    }

}

void postOrderPrint(node* root){
    if(root != NULL){
        postOrderPrint(root->left);
        postOrderPrint(root->right);
        cout<< root->data <<"\n" <<endl;
    }

}

void  inOrderPrint(node* root){
    if(root != NULL){
        inOrderPrint(root->left);
        cout<< root->data<<"\n"<<endl;
        inOrderPrint(root->right);
    }

}

void destroyTree(node* root){

    if(root != NULL){
        destroyTree(root->left);
        destroyTree(root->right);
        cout<<" Destroying the tree: " << root-> data<< endl;
        delete root;
    
    }
}


/*node* removeNode(node* root, int data){
        if( root == NULL)
        {
            return NULL;
        }else if(root->data == data){
        
        
        }else if()



}*/

int countNodes(node* root){
    if( root == NULL)  // if root is null then there is nothing to count and return 0 of the count value.
        return 0;
    
    else{
        int count=1; // counting root node
        count += countNodes(root->left); // count the right sided nodes form the root
        count += countNodes(root->right); // count the left sided nodes from the root
        return count;           // Returns the total count of all nodes.
    }
}

int main(int argc, char **argv) {
    // insert code here...
    node* root= NULL;
    root = insert(root,5);
    root = insert(root,10);
    root = insert(root,15);
    root = insert(root,25);
    root = insert(root,24);
    root = insert(root,37);
    preOrderPrint(root);
    postOrderPrint(root);
    inOrderPrint(root);
    int result1 = countNodes(root);
    cout<< result1 << endl;
    int num;
    cout<< "Enter the value of the number that is to be searched in the tree: "<< endl;
    cin>>num ;
    bool result = search(root,num);
    if(result == true){
        cout<< " Looking for num in the tree... \n";
        cout<< " number found"<<endl;
    }else{
        cout<< "Number not found in the tree." <<endl;
    }
    
    // destroyTree(root);
    
   return 0;
}