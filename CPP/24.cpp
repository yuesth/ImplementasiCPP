#include<iostream>
using namespace std;
int *saved, counter=0, p;
int ope(int i, int j, int k, int a, int b, int c, int d, int n=24){
	int t=a;
	if(i==0){
		a+=b;
	}else if(i==1){
		a-=b;
	}else if(i==2){
		a*=b;
	}else if(i==3){
		if(a%b==0){
			a/=b;
		}else{
			return 0;
		}
	}
	if(j==0){
		a+=c;
	}else if(j==1){
		a-=c;
	}else if(j==2){
		a*=c;
	}else if(j==3){
		if(a%c==0){
			a/=c;
		}else{
			return 0;
		}
	}
	if(k==0){
		a+=d;
	}else if(k==1){
		a-=d;
	}else if(k==2){
		a*=d;
	}else if(k==3){
		if(a%d==0){
			a/=d;
		}else{
			return 0;
		}
	}
	if(a==n){
			cout<<t;
			switch(i){
				case 0:cout<<"+";break;
				case 1:cout<<"-";break;
				case 2:cout<<"*";break;
				case 3:cout<<"/";break;
			}
			cout<<b;
			switch(j){
				case 0:cout<<"+";break;
				case 1:cout<<"-";break;
				case 2:cout<<"*";break;
				case 3:cout<<"/";break;
			}
			cout<<c;
			switch(k){
				case 0:cout<<"+";break;
				case 1:cout<<"-";break;
				case 2:cout<<"*";break;
				case 3:cout<<"/";break;
			}
			cout<<d<<endl;
	}
}
main(){
	int a, b, c, d,n=24;
	cin>>a>>b>>c>>d;
	int i, j, k;
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			for(k=0;k<=3;k++){
				ope(i,j,k,a,b,c,d,n);
				ope(i,j,k,a,b,d,c,n);
				ope(i,j,k,a,c,b,d,n);
				ope(i,j,k,a,c,d,b,n);
				ope(i,j,k,a,d,b,c,n);
				ope(i,j,k,a,d,c,b,n);
				ope(i,j,k,b,a,c,d,n);
				ope(i,j,k,b,a,d,c,n);
				ope(i,j,k,b,c,a,d,n);
				ope(i,j,k,b,c,d,a,n);
				ope(i,j,k,b,d,a,c,n);
				ope(i,j,k,b,d,c,a,n);
				ope(i,j,k,c,a,b,d,n);
				ope(i,j,k,c,a,d,b,n);
				ope(i,j,k,c,b,d,a,n);
				ope(i,j,k,c,b,a,d,n);
				ope(i,j,k,c,d,b,a,n);
				ope(i,j,k,c,d,a,b,n);
				ope(i,j,k,d,a,b,c,n);
				ope(i,j,k,d,a,c,b,n);
				ope(i,j,k,d,b,a,c,n);
				ope(i,j,k,d,b,c,a,n);
				ope(i,j,k,d,c,a,b,n);
				ope(i,j,k,d,c,b,a,n);
			}
		}
	}	
}
