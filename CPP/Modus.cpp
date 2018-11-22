#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void isi(int *data,int n){
	srand(time(NULL));
	int i,x;
	char m='N';
	cout<<"Masukan data sendiri <Y/N>";
	cin>>m;
	a:
	if(m=='Y'){
		for(i=0;i<n;i++){
			cin>>data[i];
		}
	}else if(m=='N'){
		cout<<"Berapa data terbesar-nya?";cin>>x;
		for(i=0;i<n;i++){
			data[i]=rand()%x+1;
		}
	}else{
		goto a;
	}
}
void cetak(int *data, int n){
	int i;
	for(i=0;i<n;i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
}
void partisi(int *data, int awal, int akhir, int &j){
	int i, pivot=data[awal];
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
void sort(int *data,int awal,int akhir){
	int j;
	if(awal<akhir){
		partisi(data,awal,akhir,j);
     	sort(data,awal,j-1);
     	sort(data,j+1,akhir);
  	}
}

main(){
	srand(time(NULL));
	int *data, n, i, j, k=1, l, m, c;
	//jumlah data
	cout<<"Banyak data : ";cin>>n;
	data=new int[n];
	//isi data
	isi(data,n);
	sort(data,0,n-1);
	cetak(data,n);
	if(data[n-1]>=n){
		c=n;
	}else{
		c=data[n-1];
	}
	//cek utk duplikasi dan jumlah
	int cek[c][2];
//	cout<<c<<endl;
	bool dup=false;
	cek[0][0]=data[0];
	cek[0][1]=1;
	for(i=1;i<n;i++){
		dup=false;
		for(j=0;j<k;j++){
			if(data[i]==cek[j][0]){
				dup=true;
				l=j;
				goto b;
			}
		}
		b:
		if(dup==false){
			cek[k][0]=data[i];
			cek[k++][1]=1;
		}else{
			cek[l][1]++;
		}
	}
//	cout<<k<<endl;
	for(i=k;i<n;i++){
		cek[i][0]=NULL;
		cek[i][1]=NULL;
	}
//	cek isi cek[][]
		
	for(i=0;i<=k;i++){
		cout<<cek[i][0]<<" ";
	}
	cout<<endl;
	for(i=0;i<=k;i++){
		cout<<cek[i][1]<<" ";
	}
	cout<<endl;	
	//sort cek[][]
	for(i=1;i<k;i++){
		j=i-1;
		int temp0=cek[i][0];
		int temp=cek[i][1];
		while(cek[j][1]>temp && j>=0){
			cek[j+1][0]=cek[j][0];
			cek[j+1][1]=cek[j][1];
			j--;
		}
		cek[j+1][0]=temp0;
		cek[j+1][1]=temp;
	}
//	cek isi cek[][]
	/*
	for(i=0;i<k;i++){
		cout<<cek[i][0]<<" ";
	}
	cout<<endl;
	for(i=0;i<k;i++){
		cout<<cek[i][1]<<" ";
	}
	cout<<endl;
	*/
	if(cek[k-1][1]==1){
		cout<<"Tidak ada Modus"<<endl;
	}else{
		cout<<"Modus : "<<endl;
		for(i=k-1;i>=0;i--){
			if(i==k-1){
				cout<<" "<<cek[i][0]<<" Muncul "<<cek[i][1]<<"x"<<endl;
			}else if(cek[i][1]==cek[k-1][1]){
				cout<<" "<<cek[i][0]<<" Muncul "<<cek[i][1]<<"x"<<endl;
			}else{
				break;
			}
		}
	}
}
