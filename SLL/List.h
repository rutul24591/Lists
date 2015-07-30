//
//  List.h
//  ListVideos
//
//  Created by Rutul Amin on 7/15/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//
#ifndef LIST_H
#define	LIST_H

class List{
private:
    int count=0;
    int searchResult;
    typedef struct node{
        int data;
        node* next;
    }* nodePtr;
    
    /*struct node{          either this way from lines 19 to 24 or above
     int data;
     node* next;
     };
     
     typedef struct node* nodePtr;    //doesnt need to write struct node* everytime just write nodePtr*/
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
public: ///this is where functions are go/called
    List(); //classname and functions used in this linked list
    void addNode (int addData);
    void deleteNode(int deleteData);
    void printList();
    void countList();
    void getNth(int num);
    void insertFront(int insertData);
    void purge();
    
};

#endif	/* LIST_H */

