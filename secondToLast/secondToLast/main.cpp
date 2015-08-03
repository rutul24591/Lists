//
//  main.cpp
//  secondToLast
//
//  Created by Rutul Amin on 8/1/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
#include "secondToLast.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct node{
    
    int data;
    node* next;
    
};

node * secondToLast(node *head, int N){
    
    node *curr = head;

    node *behind;
    behind = head;
    for( int i=0; i< N; i++){
        if( curr -> next != NULL){
            curr= curr-> next;
        }else{
            cout<< " The list is empty"<< endl;
        }
    }
    while(curr -> next != NULL){
        curr =  curr -> next;
        behind = behind-> next;
    }
    cout<<  behind << endl;
    return behind;
    
}
void printForward(node * head){
    
    node *temp = head; // the node pointer temp will be pointing to the node where head is currently pointing to
    
    while( temp != NULL){ // as long as temp is not equal to null we will traverse through the list printing out each and every data of the node.
        
        cout<< temp-> data <<" \n"<< endl;  // printing out the data of each node.
        temp = temp-> next;             // incrementing or making the temp point to the next node .
    }
    
}


int main(int argc, char **argv){
    
    
    node *head;
    node *n;
    
    n= new node; // creating a new node. This statement makes the n point to the new node
    n-> data = 1;
    cout<< &n <<endl; // prints the memory address
    
    cout<< n-> data <<endl;
    head = n; // This makes the head point to the node where n is pointing to

    n= new node; // creating a new node. This statement makes the n point to the new node
    n-> data = 2;
    cout<< n->data << endl;
    n= n-> next;
    
    return 0;
}

