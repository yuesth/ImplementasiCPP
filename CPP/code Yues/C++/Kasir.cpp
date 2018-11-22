//LIBRARY UNTUK MENGAKSES SOURCE CODE NYA
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//Fungsi untuk meng inputkan hari
void date(int hari,int bulan,int tahun){
    
    if(hari==0 && bulan==0 && tahun==0)
        cout<<"Data yang anda masukkan salah!";
    else{
        cout<<"Jadi Tanggal hari ini:"<<hari<<"/"<<bulan<<"/"<<tahun;
        cout<<endl;
    }
}

//Fungsi untuk meng inputkan nama pegawai
void customer_service(){
    int cs;
    cout<<"Nama Pegawai:";cin>>cs;
}

int main(){
    //variabel-variabel dari variabel struktur "pembelian"
    struct pembelian{
        int banyak_item[100];
        int jum_barang_total;
        long total_harga_barang[100];
        long total_seluruh=0;
        int kode_barang;
        string nama_barang[5]={"ASUS INTEL CORE i7","SPEAKER WIRELESS SONY","KEYBOARD BUFFTECH RGB27","MOUSE A7X WIRELESS","WEBCAM ANTITHEFT"};
        long harga_satuan[5]={1000000,800000,500000,300000,100000};
        long uang_anda;
        long kembalian;
    };
    
    //Memasukkan banyak barang yag akan dibeli
    int i;
    struct pembelian beli1;
    
    cout<<"Jumlah barang:";cin>>beli1.jum_barang_total;
    cout<<endl;
    
    //Memasukkan Kode barang untuk di cek harganya
    
    for(int i=0;i<=(beli1.jum_barang_total-1);i++){
        cout<<"Masukkan kode barang ke-"<<(i+1)<<":";cin>>beli1.kode_barang;
        cout<<"Banyak item :";cin>>beli1.banyak_item[i];
        
        if(beli1.kode_barang<=0 && beli1.kode_barang>=100){
            cout<<"Kode barang yang anda masukkan salah!";
        }
        else if(beli1.kode_barang==1){
            cout<<beli1.nama_barang[0]<<endl;
            beli1.total_harga_barang[i]=beli1.harga_satuan[0]*beli1.banyak_item[i];
            cout<<"Harga Barang:"<<beli1.total_harga_barang[i];
        }
        else if(beli1.kode_barang==2){
            cout<<beli1.nama_barang[1]<<endl;
            beli1.total_harga_barang[i]=beli1.harga_satuan[1]*beli1.banyak_item[i];
            cout<<"Harga Barang:"<<beli1.total_harga_barang[i];
        }
        else if(beli1.kode_barang==3){
            cout<<beli1.nama_barang[2]<<endl;
            beli1.total_harga_barang[i]=beli1.harga_satuan[2]*beli1.banyak_item[i];
            cout<<"Harga Barang:"<<beli1.total_harga_barang[i];
        }
        else if(beli1.kode_barang==4){
            cout<<beli1.nama_barang[3]<<endl;
            beli1.total_harga_barang[i]=beli1.harga_satuan[3]*beli1.banyak_item[i];
            cout<<"Harga Barang:"<<beli1.total_harga_barang[i];
        }
        else if(beli1.kode_barang==5){
            cout<<beli1.nama_barang[4]<<endl;
            beli1.total_harga_barang[i]=beli1.harga_satuan[4]*beli1.banyak_item[i];
            cout<<"Harga Barang:"<<beli1.total_harga_barang[i];
        }
        beli1.total_seluruh=beli1.total_seluruh+beli1.total_harga_barang[i];
        cout<<endl;
        cout<<endl;
        
    }
    
    //OUTPUT UNTUK MENAMPILKAN STRUK PEMBELIAN
    cout<<"TOTAL yang harus dibayar :"<<beli1.total_seluruh<<endl;
    cout<<"Uang anda :";cin>>beli1.uang_anda;
    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"                               POGUNG LOR 'YUES'              "<<endl;
    cout<<"                     JAKAL KM 4,5 KARANG ASEM CT III/18    "<<endl;
    cout<<"                              TELP.0858-32743306            "<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    date(4,11,2016);
    customer_service();
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Nama Barang          HargaSatuan   QTY     Total Harga"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    for(i=0;i<=(beli1.jum_barang_total-1);i++){
        cout<<beli1.nama_barang[i]<<"       ";
        cout<<beli1.harga_satuan[i]<<"     ";
        cout<<beli1.banyak_item[i]<<"       ";
        cout<<beli1.total_harga_barang[i]<<endl;
    }
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"TOTAL yang harus dibayar :"<<beli1.total_seluruh<<endl;
    cout<<"Uang anda:"<<beli1.uang_anda<<endl;
    beli1.kembalian=beli1.uang_anda-beli1.total_seluruh;
    cout<<"Kembaliannya adalah:"<<beli1.kembalian<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
}
