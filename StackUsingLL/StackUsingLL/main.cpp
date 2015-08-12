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


struct stack *createStack(int max){
    return NULL;
}

struct node
{
    int data;
    node* next;
};

void push(node **top,int data);
int pop(int data);
bool isEmpty();

void push(node **top,int data){
    node* n= new node();
    if( n == NULL){
        n->data= data;
        n->next= *top;
        *top= n;
    }
}

int main(int argc, char **argv){


    
    return 0;
}
