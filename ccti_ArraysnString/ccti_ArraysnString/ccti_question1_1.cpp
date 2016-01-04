//
//  main.cpp
//  ccti_ArraysnString
//
//  Created by Rutul Amin on 12/29/15.
// Copyright (c) 2015 Rutul Amin. All rights reserved.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "ccti_question1_1.h"

using namespace std;

//
//bool isUniqueChars(string str)
//{
//    if (str.length() > 256)
//    {
//        return false;
//    }
//    
//    bool ascii_set[256];
//    
//    for (int i = 0; i < str.length(); ++i)
//    {
//        int value = str[i];
//        
//        if (ascii_set[value])
//        {
//            return false;
//        }
//        
//        ascii_set[value] = true;
//    }
//    
//    return true;
//}

bool isUniqueChars2(string str){
    if (str.length() > 256)
    {
        return false;
    }
    int checker =0;
    //cout<< checker <<endl;
    for(int i =0; i< str.length(); i++){
    int val = str[i] - 'a';
        cout << "The value of val is:"<< val << endl;
        if((checker && (1 << val)) > 0){
            cout<< "Oops duplicates encountered, String is not unique" <<endl;
            return false;
        }
        checker |= (1 << val);
        cout<< checker << endl;
    }
    cout<< "The given string is unique"<<endl;
    return true;
}

int main(int argc, char** argv){
  //  cout<<"Value: "<<isUniqueChars("rutul")<<endl;
    
  cout<< "res "<< isUniqueChars2("bcd")<<endl;
    return 0;
}


//int main() {
//    
//    unsigned int a = 60;	/* 60 = 0011 1100 */
//    unsigned int b = 13;	/* 13 = 0000 1101 */
//    int c = 0;
//    
//    c = a & b;       /* 12 = 0000 1100 */
//    printf("Line 1 - Value of c is %d\n", c );
//    
//    c = a | b;       /* 61 = 0011 1101 */
//    printf("Line 2 - Value of c is %d\n", c );
//    
//    c = a ^ b;       /* 49 = 0011 0001 */
//    printf("Line 3 - Value of c is %d\n", c );
//    
//    c = ~a;          /*-61 = 1100 0011 */
//    printf("Line 4 - Value of c is %d\n", c );
//    
//    c = a << 16;     /* 240 = 1111 0000 */
//    printf("Line 5 - Value of c is %d\n", c );
//    
//    c = a >> 2;     /* 15 = 0000 1111 */
//    printf("Line 6 - Value of c is %d\n", c );
//    
//    return 0;
//}