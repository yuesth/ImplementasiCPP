//
//  main.cpp
//  Daftar nilai mahasiswa
//
//  Created by mymac on 11/10/16.
//  Copyright © 2016 mymac. All rights reserved.
//

#include <iostream>
#include<stdio.h>
using namespace std;

int  main(){
    
    struct siswa17
    {
        char nama[20];
        int nomor_induk;
        float nilai_rapor;
    };
    
    struct siswa17 siswa1[3];
    for(int i=0;i<3;i++){
        cout<<"Nama siswa ke-"<<(i+1)<<":";
        cin>>siswa1[i].nama;
        cout<<"nomor induk :";
        cin>>siswa1[i].nomor_induk;
        cout<<"Nilai rapor:";
        cin>>siswa1[i].nilai_rapor;
    }
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Nama            No.induk            Nilai rapor"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    for(int i=0;i<3;i++){
        
        cout<<siswa1[i].nama<<"            ";
        cout<<siswa1[i].nomor_induk<<"                ";
        cout<<siswa1[i].nilai_rapor;
        cout<<endl;
    }
    
    cout<<"---------------------------------------------------"<<endl;
    
    
}
