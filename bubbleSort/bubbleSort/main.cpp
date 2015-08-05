//
//  main.cpp
//  bubbleSort
//
//  Created by Rutul Amin on 8/4/15.
//  Copyright (c) 2015 Rutul Amin. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <string>


using namespace std;

void bubbleSort( int a[], int n);

int main(int argc,char ** argv) {
    int data[10];
    for(int k=0;k<10;k++){
        data[k] = rand() % 100;
        cout<< data[k] <<endl;
    }
    
    bubbleSort(data,11);
    return 0;
}



void bubbleSort(int a[], int n){
    for( int i= n-1;i >=0; i--){
        for(int j=0; j < i-1; j++){
            if(a[j] > a[j+1]){
                int temp= a[j];  // Swap elements
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    cout<< " Sorted list in ascending order of input" <<endl;
    for(int l=0;l<=10;l++){
        cout<< a[l]<<endl;
    }
};
