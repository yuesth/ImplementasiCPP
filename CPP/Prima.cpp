#include<iostream>
#include<cmath>
using namespace std;
main(){
	long long n, i;
	cin>>n;
	bool prima=true;
	if(n==2||n==3||n==5){
		prima=true;
	}else if(n%2==0 || n<2 || n%5==0){
		prima=false;
	}else{
		for(i=3;i<=sqrt(n)+1;i+=2)
			if(n%i==0){
				prima=false;
				break;
			}
	}
	if(prima==true){
		cout<<"prima"<<endl;
	}else{
		cout<<"composite"<<endl;
	}
}
