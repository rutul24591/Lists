//
//  main.cpp
//  diamond
//
//  Created by Rutul Amin on 1/24/16.
//  Copyright (c) 2016 Rutul Amin. All rights reserved.
//

#include<stdio.h>

struct Interval{
    int Buy;
    int Sell;
};

void diamondBuySell(int n, int price[]){
    if(n == 1){
        return;
    }
    
    int count=0;
    
    Interval solution[n/2 + 1];
    
    int i=0;
    while(i < n-1){
        while((i < n-1) && (price[i+1] <= price[i])){
            i++;
        }
        if( i == n-1){
            break;
        }
        solution[count].Buy = i++;
        
        while ((i < n) && (price[i] >= price[i-1])){
            i++;
        }
        
        solution[count].Sell = i-1;
        count++;
        
    }
    if(count ==0){
        printf("There's no hour when buying diamonds will be show some 		profit\n");
    }else{
        for(int i=0;i < count;i++){
            printf("Buy: %d\t Sell:%d\n", solution[i].Buy,solution[i].Sell);
        }
        return;
    }


int main()
{
    // diamond prices on continuos hours
    int price[] = {993,543,757,113,584,817,582,638,174,268,830,97,715,175};
    int n = sizeof(price)/sizeof(price[0]);
    
    // call
    diamondBuySell(n,price);
    
    return 0;
}