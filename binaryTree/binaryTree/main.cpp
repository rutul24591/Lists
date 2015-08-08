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
        cout << root -> data << "\n\n"<< endl;
         preOrderPrint( root->left );
         preOrderPrint( root->right );
    }

}

void postOrderPrint(node* root){
    if(root != NULL){
        postOrderPrint(root->left);
        postOrderPrint(root->right);
        cout<< root->data <<"\n\n" <<endl;
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
   
    int num;
    cout << "Enter the value of the number that is to be searched in the tree: "<< endl;
    cin >> num ;
    bool result = search(root,num);
    if(  result == true){
        cout<< " Looking for num in the tree... \n";
        cout<< " number found"<<endl;
    }else{
        cout<< "Number not found in the tree."<<endl;
    }
    
   return 0;
}










