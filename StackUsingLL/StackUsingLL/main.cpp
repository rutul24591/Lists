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

struct node{
    int data;
    node** next;
};

void push(int data);
int pop(int data);
bool isEmpty();

void push(int data){
    node n = new node(); //partial implementation.still needs work...
    int top;
    n->data =data;
    n->next =top;
    top=n;
    


}

int main(int argc, const char * argv[]){

   
    

    
    return 0;
}
