//
//  main.cpp
//  binary search
//
//  Created by Rutul Amin on 8/2/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;

int binarysearch(int a[],int i, int j, int key);

int main(int argc,char** argv) {
    int data[]= {1,2,3,6,7,13,15,21,51,61,66,67,81,87,88,90,93};
    
    int result = binarysearch(data,0,16,66);
    
    cout<<" The key is located at location: " << result << endl;
    
    return 0;
};



int binarysearch(int a[], int i, int j, int key){
    int res = 0;
    cout << " Looking for key..."<< endl;
    while( i <= j){
        int mid = ((i+j)/2);
        if(a[mid] == key){
            return mid;
        }else if(a[mid] > key){
            j = mid - 1;
        }else{
            i = mid + 1;
        }
        res = mid;
        
    }
    return res;
};

