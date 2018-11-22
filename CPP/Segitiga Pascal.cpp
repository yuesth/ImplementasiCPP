#include<iostream>
using namespace std;

main(){
	int n,i;
	double **a;
	cin>>n;// max at 22998
	a=new double*[n+1];
	for(i=0;i<=n;i++){
		a[i]=new double[i+1];
	}
	int  j, k;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			if((i==0 && j==0)||(j==0 || j==i)){
				a[i][j]=1;
			}else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(i=0;i<=n;i++){
		cout<<endl;
		for(k=n;k>=i;k--){
			cout<<" ";
		}
		for(j=0;j<=i;j++){
			cout<<a[i][j]<<" ";
		}
	}

}
