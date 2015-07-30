//
//  main.cpp
//  ListVideos
//
//  Created by Rutul Amin on 7/15/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//
#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;


int main(int argc, char** argv){

    List Rutul;  // class name(i.e List + list object name(i.e Rutul))

    Rutul.addNode(2);  // Testing the code in the main method fo the functions created in the List.h
    Rutul.addNode(5);
    Rutul.addNode(10);
    Rutul.addNode(54);
    Rutul.addNode(24);
    Rutul.printList();
    
    
    Rutul.deleteNode(10);   // Testing the deleteNode method
  
   // Rutul.printList();
    
  //  Rutul.insertFront(14);
   //   Rutul.purge();
    Rutul.countList();
    
 /*
    int choice;
    int num;
    while(1){
    cout<< "Please select from the following options: \n" << endl;
    cout<< "1. Insert \n"<< endl;
    cout<< "2. Delete \n"<< endl;
    cout<< "3. Size \n"<< endl;
    cout<< "4. Print the elements of the linked list \n" <<endl;
    cout<< "5. Search for data in the linked list \n" <<endl;
    cout<< "6. Add the element to the front of the list \n" << endl;
    cin >> choice;
    
    if( (choice) <=0){
        cout << "Please enter a valid integer as described in the above list of choices."<< endl;
        exit(0);
    }else{
        switch(choice){
            case 1:
                cout <<" Enter the number to be inserted in the list: "<< endl;
                cin >> num;
                Rutul.addNode(num);
                break;
            case 2:
                cout<< "Enter the number that is to removed from the list: "<<endl;
                cin >> num;
                Rutul.deleteNode(num);
                break;
            case 3:
                Rutul.countList();
                break;
            case 4:
                Rutul.printList();
                break;
            case 5:
                cout<< "Enter the number that is to searched from the list: \n"<<endl;
                cin >> num;
                Rutul.getNth(num);
                break;
           /* case 6:
                cout<< " Enter the data of the node that is to be inserted at the front of the list \n"<< endl;
                cin >> num;
                Rutul.insertFront(num);
                cout<<" The element was inserted at front of the current linked list"<< endl;
                break; */
                
          //  default:    cout<<" Invalid options. Please try again"<< endl;
        }
