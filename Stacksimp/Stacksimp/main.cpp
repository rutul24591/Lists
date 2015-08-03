//
//  main.cpp
//  Stacksimp
//
//  Created by Rutul Amin on 8/2/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

class Stack{
    
private:
    int top;
    int capacity;
    int *storage;


public:
    
    Stack(int capacity){
        if( capacity <= 0)
            throw string("Stack has reached its limit.Increasing the capacity will help");
        storage = new int[capacity];
        this->capacity = capacity; // this ->  capacity = 100;
        cout<< this->capacity << " " << endl;
        top = -1;
    
    }
    
    
    void push(int val){
        if( top == capacity)
            throw string("stacks has reached its storage capacity");
        top ++;
        storage[top] = val;
        cout<< storage[top] << endl;
       // top++;
    }
    
    void pop(){
    
    if( top == -1)
        throw string("The stack is empty");
        top --;
    }

    int peek(){
        if(top == -1)
            throw string("Stack is empty");
        return storage[top];
    }
    
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
    
    void display(){
        if( top == 0) {
            cout<< " The stack is empty"<<endl;
        }
        for( int i = 0; i <= top; i++){
            cout<< storage[i];
            
        }
    }
    
    ~Stack() {
        delete[] storage;
    }
    
};

int main(int argc, const char * argv[]) {
    Stack *s= new Stack(100);
    s -> push(1);
    s -> push(2);
    s -> push(3);
  //  cout<< " 2 \n"<<endl;
    s -> display();
    //cout<<"display works \n" <<endl;
    s -> isEmpty();
    return 0;
}
