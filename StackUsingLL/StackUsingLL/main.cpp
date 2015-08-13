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
    };
    
    node* top;
    int count;
    int capacity;
    

    
public:
        stackLL(int max){
            top = NULL;
            capacity = max;
            count = 0;
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
                
                
        }
    }
};

int main( int argc, char** argv){

    stackLL *s1 = new stackLL(6);
    
    s1->push(1);
    s1->push(2);
    s1->push(3);
    s1->push(4);
    s1->push(5);
    s1->push(6);
    
    s1->pop();
    s1->pop();

    return 0;
}
