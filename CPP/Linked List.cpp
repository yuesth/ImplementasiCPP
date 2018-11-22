#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int n, i;

typedef struct node{
	int data;
	node *next;
}*list; 
list l=NULL;

void buat(list &l){
	list t;
	for(i=1;i<=n;i++){
		t=new node;
		(*t).data=rand()%10+1;
		cout<<(*t).data<<" ";
		(*t).next=l;
		l=t;
	}
	cout<<endl;
}
void cetak(list &l){
	list t;
	if(l!=NULL){
		t=l;
		cout<<endl;
		while(t!=NULL){
			cout<<(*t).data<<" ";
			t=(*t).next;
		}
		cout<<endl;
	}else{
		cout<<"NULL"<<endl;
	}
}
void hapus(list&l ,int n){
	list t, r;
	if((*l).data==n){
		r=l;
		l=(*l).next;
		delete r;
	}else{
		t=l;
		while((*t).next!=NULL && ((*t).next->data!=n)){
			t=(*t).next;
		}
		if((*t).next==NULL){
			cout<<"Tidak ada"<<endl;
		}else{
			r=(*t).next;
          	(*t).next=(*r).next;
          	delete r;
		}
	}
}
int nilai(list l, int k){
	list t;
	int i;
	if(k>0 && l!=NULL){
		t=l;
		for(i=2;i<=k;i++){
			if(t!=NULL){
				t=(*t).next;
			}
		}
		if(t!=NULL){
			return (*t).data;
		}else{
			return 0;
		}
		
	}else{
		return 0;
	}
}

main(){
	cin>>n;
	buat(l);
	cetak(l);
//	cout<<nilai(l,1)<<endl;
	cout<<l->data<<endl;	
	cout<<l->next->data<<endl;
//	cin>>n;
//	hapus(l,n);
//	cetak(l);
}
