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

class node{
public:
    int data;
    node* next;
};

class stackLL{
    private:
    node* top;
    int count;
    int capacity;
    
    public:
        stackLL(int max){
            top = NULL;
            capacity = max;
            count = 0;
        }
    
    
    
    
    
};
