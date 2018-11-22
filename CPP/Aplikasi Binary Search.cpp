#include<iostream>
#include<cmath>
using namespace std;
int count=0;
double search(double Q, double aw=3, double ak=7){
	double m=(aw+ak)/2, z=m*log(m)-5;
	cout<<aw<<" "<<m<<" "<<ak<<endl;
//	cout<<aw*log(aw)-5<<" "<<z<<" "<<ak*log(ak)-5<<endl<<endl;
	if(count==20){
		cout<<endl;
		return m;
	}else{
		count++;
		if(z==Q){
			return m;
		}else if(z<Q){
			return search(Q,m,ak);
		}else{
			return search(Q,aw,m);
		}
	}
}
main(){
	double y=0;
//	cin>>y;
	cout<<search(y)<<endl;
}
