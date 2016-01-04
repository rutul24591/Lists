//
//  main.cpp
//  ccti_ArraysnString1.2
//
//  Created by Rutul Amin on 1/4/16.
//  Copyright (c) 2016 Rutul Amin. All rights reserved.
//



#include <iostream>
#include <stdio.h>
#include <string>
#include "ccti_question1_2.h"

using namespace std;

void reverse(char* str){

    char *start= str;
    char *end = start+(strlen(str) - 1);

        while(start < end){
            char temp = *end;
            *end = *start;
            *start = temp;
            start++;
            end--;
        }
}



int main(){
    
    using namespace std;
    char str[100];
    cout<< " Enter The string that you want to get reversed: "<<endl;
    cin >> str;
    
    //int size= strlen(str);
    reverse(str);
    cout<< str << endl;
    return 0;
}

