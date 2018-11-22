#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<ctime>
#include<algorithm>
using namespace std;
int *data, *data2, temp;
int i, j, k, l, pivot, awal, akhir, mid;
long long counter=0, n, a;
void isi_data(int *data, int n){
	srand(time(NULL));
	for(i=0;i<n;i++){
		data[i]=rand()%100+1;
	}
}
void bubble_sort(int *data, int n){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(data[j]>data[j+1]){
				swap(data[j],data[j+1]);
				counter++;
			}
		}
	}
}
void insertion_sort(int *data, int n){
	int k;
	for(i=1;i<n;i++){
		for(k=i;k>=1 && data[k]<data[k-1];k--){
			swap(data[k],data[k-1]);
		}
	}
} 
void selection_sort(int *data, int n){
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(data[i]>data[j]){
				swap(data[i],data[j]);
				counter++;
			}
		}
	}
}

void merge(int *data, int awal, int mid, int akhir){
	i=awal;
	j=mid+1;
	k=awal;
	do{
		if(data[i]<=data[j]){
			data2[k]=data[i];
			i++;
		}else{
			data2[k]=data[j];
			j++;
		}
		k++;
	}while(i<=mid && j<=akhir);
	
	if(i>mid){
		for(l=j;l<=akhir;l++){
			data2[k]=data[l];
			k++;
		}
	}else{
		for(l=i;l<=mid;l++){
			data2[k]=data[l];
			k++;
		}
	}
	for(k=awal;k<=akhir;k++){
		data[k]=data2[k];
	}
	counter++;
}
void merge_sort(int *data, int awal, int akhir){
	int mid;
	if(awal<akhir){
		mid=(awal+akhir)/2;
		merge_sort(data,awal,mid);
		merge_sort(data,mid+1,akhir);
		merge(data,awal,mid,akhir);
	}
}
void partisi(int *data,int awal,int akhir,int &l){
	pivot=data[awal];
	i=awal;
	j=akhir;
	while(i<j){
		while(i<akhir && data[i]<=pivot){
			i++;
		}
		while(j>awal && data[j]>pivot){
			j--;
		}
		if(i<j){
			swap(data[i],data[j]);
		}
	}
	data[awal]=data[j];
	data[j]=pivot;
}
void quick_sort(int *data,int awal,int akhir){
	if(awal<akhir){
		counter++;
		partisi(data,awal,akhir,j);
     	quick_sort(data,awal,j-1);
     	quick_sort(data,j+1,akhir);
  	}
}

void MergeQuick(int *data,int awal, int akhir){
	int mid;
	if(akhir-awal<10000){
		quick_sort(data,awal,akhir);
	}else{
		mid=(awal+akhir)/2;
		MergeQuick(data,awal,mid);
		MergeQuick(data,mid+1,akhir);
		merge(data,awal,mid,akhir);
	}
}
main(){
	int T;
	n=8;
	cout<<"Masukan Jumlah data = ";cin>>n;
	data=new int[n];
	data2=new int[n];
	isi_data(data,n);/*
	data[0]=1;
	data[1]=3;
	data[2]=4;
	data[3]=5;
	data[4]=7;
	data[5]=6;
	data[6]=2;
	data[7]=8;	
	cetak_data(data,n);*/
	float begin_time=clock();
	//counter=0;
	//bubble_sort(data,n);
	//insertion_sort(data,n);
	selection_sort(data,n);
	//merge_sort(data,0,n-1);
	//quick_sort(data-0,n);
	//MergeQuick(data,0,n-1);
	//cetak_data(data,n);
	//sort(data,data+n);
	cout<<"Perbandingan = "<<counter<<endl;
	cout<<"Running Time = "<<float(clock()-begin_time)/1000<<"s"<<endl;
	return 0;
}
