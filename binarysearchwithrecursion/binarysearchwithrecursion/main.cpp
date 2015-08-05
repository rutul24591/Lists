//
//  main.cpp
//  binarysearchwithrecursion
//
//  Created by Rutul Amin on 8/4/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;


int binarySearch(int a[],int i, int j, int key);

int main(int argc, char ** argv) {
   
    int data[] = {1,2,3,4,5,6,7,8,9,10,11};
    int result = binarySearch(data,0,10,5);
    cout<<" The key to be searched is found at location: "<< result <<endl;
    return 0;
}



int binarySearch(int a[],int i, int j, int key){

    int res=0,mid;
    cout<< " Looking for the key.... "<<endl;
    while(i<=j){
        mid = ((i+j)/2);
        if(a[mid] == key){
            return mid;
        }else if( a[mid] > key){
            res=binarySearch(a,i,mid-1,key);
            return res;
        }else{
            res=binarySearch(a,mid+1,j,key);
            return res;
        }
        res = mid;
    
    }
    return res;

};
