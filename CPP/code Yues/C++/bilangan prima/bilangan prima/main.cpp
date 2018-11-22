//
//  main.cpp
//  bilangan prima
//
//  Created by mymac on 11/10/16.
//  Copyright © 2016 mymac. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;
void bil_prima(){
    int prim[10],jum=0;;
    for(int i=0;i<=9;i++){
        cout<<"Bilangan ke-"<<(i+1)<<":";
        cin>>prim[i];
        cout<<endl;
    }
    for(int h=0;h<=9;h++){
        for(int j=1;j<=prim[h];j++){
            if(prim[h]%j==0)
                jum++;
        }
        if(jum==2){
            cout<<prim[h]<<" ";
        }
    }
    
}

int main(){
    bil_prima();
}
