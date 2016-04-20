//
//  main.cpp
//  StackUsingLL
//
//  Created by Rutul Amin on 8/8/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;


class stackLL{
private:
        struct node{
        int data;
        node* next;
        node* prev;
    };
    
    node* top;
    node* p;
    node* temp;
    int count;
    int capacity;
    

    
public:
        stackLL(int max){
            top = NULL;
            capacity = max;
            count = 0;
            temp = NULL;
            p= NULL;
        }
    
    void push(int data){
        if(count == capacity){
            cout<< " The Stack is full..."<<endl;
        }else{
            node *n = new node();
            if(top == NULL){
                n->data =data;
                n->next =NULL;
                top=n;
                count++;
            }else{
                n->data= data;
                n->next= top;
                top=n;
                count++;
            }
        }
    }
    
    
    void pop(){
        if(top == NULL){
            cout<< "There is no element to pop"<<endl;
            }else{
                node* out= top;
                top= top->next;
                count--;
                cout<< top->data << " is the new top after popping"<<endl;
                delete(out);
                
        }
    }


    void print(){
        node* temp= top;
        while( temp != NULL){
                cout<< temp->data<<endl;
                temp= temp->next;
            }
        }
    
     void DeleteStack(){
        
        p= top;
        while(p->next){
                temp= p-> next;
                p-> next= temp-> next;
                cout<<temp->data<<endl;
                delete temp;
        }
        if(top->data){
            top= NULL;
        }
        delete p;
    }    



};

   
    
int main(int argc, char** argv){

    stackLL *s2 = new stackLL(100);
    
    cout<< "hello "<<endl;
   
    s2->push(1);
    s2->push(2);
    s2->push(3);
    s2->push(4);
    s2->push(5);
    s2->push(6);
    s2->push(7);
    s2->push(8);
    cout<<"The elements of stack are: "<<endl;
    s2->print();
    s2->pop();
    s2->pop();
    cout<< "The new elements of stack are: "<<endl;
    s2->print();

    s2->DeleteStack();
    // s2->pop();
    cout<<" The elements in the stack after deletion:\n";
    s2->print();
    delete s2;
    return 0;
}
