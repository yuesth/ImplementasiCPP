#include<iostream>
using namespace std;
main (){
	int in1, a=1, b, out1, out2;
	cin>>in1;
	b=in1;
	while (a<=b && b<=in1){
		out1=a;
		out2=b;
		a++;
		b--;
		if (out1==out2){
			cout<<out1;	
		}else{
			cout<<out1<<out2;
		}
	}
}

