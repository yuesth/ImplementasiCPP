//
//  main.cpp
//  Pengurutan angka
//
//  Created by mymac on 11/10/16.
//  Copyright © 2016 mymac. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

void input_angka(){
    int n[10],temp,min,i=5;
    for(int i=0;i<5;i++){
        cout<<"Angka ke-"<<(i+1)<<":";
        cin>>n[i];
    }
    
    
    for(int j=0;j<(i-1);j++){
        min=j;
        for(int k=(j+1);k<5;k++){
            if (n[k]<n[min]){
                min=k;
            }
        }
        temp=n[j];
        n[j]=n[min];
        n[min]=temp;
    }
    
    for(int j=0;j<5;j++)
        cout<<n[j]<<" ";
}



int main(){
    
    input_angka();
    
    
}