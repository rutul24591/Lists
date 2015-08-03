//
//  List.cpp
//  ListVideos
//
//  Created by Rutul Amin on 7/15/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//

#include "List.h"
#include <cstdlib>
#include <iostream>


using namespace std;

List::List(){
        
        head = NULL;
        curr = NULL;
        temp = NULL;
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


void List:: deleteNode(int deleteData){

    nodePtr deletePtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr -> data != deleteData){
        temp = curr;        // temp will trail the curr by one step
        curr = curr->next;  // curr points to next
    
    }if(curr == NULL){      // Marks the end of the list and while loops gets exited for as deleteData is not found.
        cout<< deleteData <<" was not found on the list \n";  //print out the detele data
        delete deletePtr;  // destroy the deletePtr as data is not found in the list to free up memory.No garbage collection in c++.
    }else{
        deletePtr = curr;  //make the delete pointer point to curr as it will be used to delete the data andd curr and temp will be used to patch up the linked list.
        curr = curr-> next; //points to the immediate next node of the list of the node to be deleted.
        temp->next = curr;  // patch the list by making the temp point to curr.Remember we made temp to lag one step behind
        if( deletePtr == head){
            head = head -> next;
            temp = NULL;
        }
        
        delete deletePtr; // delete the node that has deleteData in it.
        cout<< "The value " << deleteData << " was deleted from the linked list\n";
    }

}

 void List ::countList(){
    int count=0;
    curr = head;
    while( curr != NULL){
        curr = curr -> next;
        count++;
    }
     cout<<" The number of nodes in the list are: "<< count << endl;
}

void List:: printList(){
    
    curr = head;            // make curr point to head
    while(curr != NULL)      // until the curr reaches at the end of the list.
    {
        cout << curr->data <<endl;  // display the data holded by that current node.
        curr = curr-> next;         // increment the curr by 1 to next node.
    }
    
}

void List:: getNth(int num){
    count = 0;
    curr = head;
    
    while(curr != NULL){
        if(count == num)
            searchResult= curr->data;
            count++;
            curr = curr-> next;
            cout<<"The search element requested is: " << searchResult <<endl; //code crashes here and needs fixing...
    }
    
}

/*void List:: deleteList(){
    curr = head;
    nodePtr next;
    while(curr != NULL){
        next= curr->next;
        delete curr;
        curr = next;
    }
    head = NULL;

}*/

void List:: insertFront(int insertData){
    
    nodePtr n = new node;
    curr = head;
    n-> next = curr->next;
    curr-> next = n;
    //n-> next = head;
    n-> data = insertData;
   // head = n;
    cout<< " The requested data " << insertData << "was added at the front of linked list" << endl;

}



void List :: purge(){
    while(head != 0)
    {
        temp = head;
        head = head -> next;
        delete temp;
    }
}

void List :: secondToLast(nodePtr head, int num){
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
     cout<<  behind << endl;;
    }
    
    

