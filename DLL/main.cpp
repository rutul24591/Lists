//
//  main.cpp
//  doublyLinkedList
//
//  Created by Rutul Amin on 7/20/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;


struct node{
    
    int data;
    node* next;
    node* prev;
};

void printForward( node* head);
void printReverse( node* tail);
int main( int argc, char** argv){
    
    
    node* head;  //make the head point to the very first node of the linked list
    node* tail;  // make the tail point to the very last node in the linked list
    node* n;     // Helps us to build the linked list
    
    n= new node; // creating a new node. This statement makes the n point to the new node
    n-> data = 1;
    n-> prev = NULL; // This makes the prev variable of n to point to NULL as their is no previous node present in the linked list. n is the single most                    element present in the list
    head = n; // This makes the head point to the node where n is pointing to
    tail = n; // This makes the tail point to the node where n is pointing to
    
    n = new node;
    n-> data = 2;
    n-> prev = tail; // finds the node that n is pointing and makes the prev( in n) point to the tail pointer. makes the 2nd node point to the first node
    tail -> next = n;
    tail = n; // because tail was still pointing to first node and now its pointing to the second node
    
    n = new node;
    n-> data = 3;
    n-> prev = tail;
    tail -> next = n;
    tail = n;
    
    
    n = new node;
    n-> data = 4;
    n-> prev = tail;
    tail -> next = n;
    tail = n;
    
    
    n = new node;
    n-> data = 5;
    n-> prev = tail;
    tail -> next = n;
    tail = n;
    
    
    n = new node;
    n-> data = 6;
    n-> prev = tail;
    tail -> next = n;
    tail = n;
    tail -> next = NULL; // As tail and n are pointing to the same node(i.e very last), its next should be pointing to NULL as we made the prev of very first node to NULL as seen while creating the first node.
    
    printForward(head);
    printReverse(tail);
    
    return 0;
}


void printForward(node * head){
    
    node * temp = head; // the node pointer temp will be pointing to the node where head is currently pointing to
    
    while( temp != NULL){ // as long as temp is not equal to null we will traverse through the list printing out each and every data of the node.
      
        cout<< temp-> data <<" \n"<< endl;  // printing out the data of each node.
        temp = temp-> next;             // incrementing or making the temp point to the next node .
    }
    
}



void printReverse(node* tail){

    node * temp = tail;
    
    while (temp != NULL){
        
        cout<< temp -> data << "  \n" << endl;
        temp= temp-> prev;
        
    }

}













