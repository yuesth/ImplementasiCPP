#include<iostream>
#include<string>
using namespace std;
main(){
	// contoh input : 14+12 atau 12*6
	// contoh output:  26 atau 72
	string n;
	cin>>n;
	//panjang string
	int n_length=n.length();
	//mencari operator
	int op1=n.find("+");
	int op2=n.find("-");
	int op3=n.find("*");
	int op4=n.find("/");
	
	int op;
	if(op1!=-1){op=op1;}
	else if(op2!=-1){op=op2;}
	else if(op3!=-1){op=op3;}
	else if(op4!=-1){op=op4;}
	//mencari bilangan pertama
	string n1;
	int bil1=0;
	int a, b=1;
	for(a=op-1;a>=0;a--){
		n1=n[a];
		if(n1=="1"){bil1+=1*b;}
		else if(n1=="2"){bil1+=2*b;}
		else if(n1=="3"){bil1+=3*b;}
		else if(n1=="4"){bil1+=4*b;}
		else if(n1=="5"){bil1+=5*b;}
		else if(n1=="6"){bil1+=6*b;}
		else if(n1=="7"){bil1+=7*b;}
		else if(n1=="8"){bil1+=8*b;}
		else if(n1=="9"){bil1+=9*b;}
		else if(n1=="0"){bil1+=0*b;}
		b*=10;
	}
	//mencari bilangan kedua
	string n2;
	int bil2=0;
	int c, d=1;
	for(c=n.length()-1;c>op;c--){
		n2=n[c];
		if(n2=="1"){bil2+=1*d;}
		else if(n2=="2"){bil2+=2*d;}
		else if(n2=="3"){bil2+=3*d;}
		else if(n2=="4"){bil2+=4*d;}
		else if(n2=="5"){bil2+=5*d;}
		else if(n2=="6"){bil2+=6*d;}
		else if(n2=="7"){bil2+=7*d;}
		else if(n2=="8"){bil2+=8*d;}
		else if(n2=="9"){bil2+=9*d;}
		else if(n2=="0"){bil2+=0*d;}
		d*=10;
	}
	//di-operasikan
	int hasil;
	if(op1!=-1){hasil=bil1+bil2;}
	else if(op2!=-1){hasil=bil1-bil2;}
	else if(op3!=-1){hasil=bil1*bil2;}
	else if(op4!=-1){hasil=bil1/bil2;}
	
	//dikeluarkan
	cout<<hasil<<endl;
}
