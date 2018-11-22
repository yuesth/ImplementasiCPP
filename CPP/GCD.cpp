#include<iostream>
using namespace std;
main(){
	int in1, in2, ou;
	int a;
	cin>>in1>>in2;
	for(a=1; a<=in1 && a<=in2; a++){
		if(in1%a==0 && in2%a==0){
			ou=a;
		}
	}
	cout<<ou<<endl;
}
