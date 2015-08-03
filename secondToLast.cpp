//
//  secondToLast.cpp
//  
//
//  Created by Rutul Amin on 7/31/15.
//
//

#include "secondToLast.h"
#include <iostream.h>
#include <stdio.h>
#include <cstdlib>

using std namespace;

struct node{
    
    int data;
    node* next;

}* nodePtr;

Node * secondToLast(node *head, int N){

    curr = head;
    nodePtr behind = new node;
    behind = head;
    for( int i=0; i< num; i++){
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
    
    
    
}
    void List::addNode(int addData){
        
        nodePtr n = new node;
        n-> next = NULL;
        n-> data = addData;
        
        if(head != NULL){                 // if a list has already been created or it must have atleast one node.Because    head pointer always points to the beginning of the list
            curr = head;                  // curr is the pointer that we need to traverse through the linked list.
            while(curr->next != NULL){    // to check if a node exists after the current node.
                curr = curr->next;        // if node exists after the curr then it must point to the next node in the list
            }
            curr->next = n;               // if the end of list has been reached it would add the new node n to it.
        }else{
            
            head= n;  // if list has not been created as yet the head pointer points to the node n which is the only node in the list.
        }
        
    }


