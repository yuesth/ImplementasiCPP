#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int len(int n){
	int m=0;
	while(n>0){
		n/=10;
		m++;
	}
	return(m);
}
main(){
	int T, count1=1;
	cin>>T;
	int z;
	while(count1<=T){
		int n, i=1;
		cin>>n;
		int m=len(n);
		int n1[m+1], n2[m+1], n3[m+1];
		//memasukan nilai ke array
		while(n>0){
			n1[i]=n%10;
			n/=10;
			i++;
		
		}
		int n_awal=n1[m];
		//mengisi array n2 dan n3
		for(i=1;i<=m;i++){
			n2[i]=n1[i];
			n3[i]=n1[i];
		}
		//sort
		sort(n1,n1+(m+1));
		
		//n1[m]=max, n1[0]=min
		//n2 = max, n3 = min
		int m1=n1[m-1];
		int m2=n1[0];
		swap(n2[m],m1);
		swap(n3[m],m2);
		
		
		//output
		cout<<"Case #"<<count1<<" : ";
		//max
		for(z=m;z>0;z--){
			if(z!=m && n2[z]==n2[m]){
				cout<<n_awal;
			}else{
				cout<<n2[z];
			}
		}
		
		cout<<" "; 
		//min
		for(z=m;z>0;z--){
			if(z!=m && n3[z]==n3[m]){
				cout<<n_awal;
			}else{
				cout<<n3[z];
			}
		}
		
		cout<<endl;
		count1++;
	}
}
