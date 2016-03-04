//
//  main.cpp
//  ccti_ArraysnStrings_1.8
//
//  Created by Rutul Amin on 2/6/16.
//  Copyright (c) 2016 Rutul Amin. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include "ccti_ArraysnStrings_1.8.h"

using namespace std;

bool question1_8:: isRotation(const string& s1, const string& s2){
    
    long len = s1.length();
    
    if(len == s2.length() && len > 0){
        string s1s1 = s1+ s1;
        return s1s1.find(s2) != string::npos;  //isSubstring(s1s1,s2);
    }
    return false;
    
}

string question1_8:: result(bool value){
    
    if(value){
        return "True";
    }
    return "False";
}

int question1_8::run(){
    string x= "apple";
    string y= "leapp";
    cout<< "Wait till the program checks if " << x << "is a substring of"<< y <<"or not: "<< result(isRotation(x,y))<< endl;
    return 0;
};

int main(){

    using namespace std;
    string x= "apple";
    string y= "leapp";
    cout<< "Wait till the program checks if " << x << "is a substring of"<< y <<"or not: "<< endl;
    question1_8::result(isRotation(x,y));
}