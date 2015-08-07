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

node* getNewNode(int key){

    node *n= new node();
    n-> data = key;
    n-> left = NULL;
    n-> right = NULL;
    return n;

}

node *insert(node *root, int key);
node *getNewNode(int key);
node *search(node *root,int key);

int main(int argc, const char * argv[]) {
    // insert code here...
    node *root= NULL;
    insert(root,5);
    insert(root,10);
    insert(root,15);
    insert(root,25);
    insert(root,24);
    insert(root,37);
    int num;
    cout<< "Enter the value of the number that is to be searched in the tree: "<< endl;
    cin>> num;
    if(search(root,num) == true){
        cout<< " Looking for num in the tree... \n";
        cout<< " number found in the tree at: "<< &num <<endl;
    }
    
    return 0;
}

node* insert(node *root, int key){
    if(root == NULL){
        root= getNewNode(key);
        return root;
    }else if(key < root -> data){
        root -> left = insert(root->left, key);
    }else{
        root -> right = insert(root->right,key);
    }
    return root;
}


bool search(node *root, int key){

    if( root == NULL){
        return false;
    }else if(root -> data == key){
        return true;
    }else if( key <= root -> data){
        return search(root ->left, key);
    }else{
        return search(root ->right, key);
    }

}












