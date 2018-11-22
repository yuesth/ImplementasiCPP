#include<iostream>
#include<string>
using namespace std;
main(){
	start:
	string in;
	cin>>in;
	int a=in.length(), b=0 ,c, jum0=0;
	string x;
	for(c=a-1;c>0;c--){
		x=in[c];
		if(x=="0"){jum0++;}
		else break;
	}
	string n;
	for(b=0;b<a-jum0;b++){
		n=in[b];
		if(n=="1"){cout<<"m";}
		else if(n=="2"){cout<<"o";}
		else if(n=="3"){cout<<"b";}
		else if(n=="4"){cout<<"i";}
		else if(n=="5"){cout<<"l";}
		else if(n=="6"){cout<<"s";}
		else if(n=="7"){cout<<"e";}
		else if(n=="8"){cout<<"d";}
		else if(n=="9"){cout<<"a";}
		else if(n=="0"){cout<<"n";}
	}
	if(jum0==1){cout<<"n"<<endl;}
	else if(jum0==2){cout<<"n da"<<endl;}
	else if(jum0==3){cout<<"n tg"<<endl;}
	else if(jum0==4){cout<<"n am"<<endl;}
	else if(jum0==5){cout<<"n lm"<<endl;}
	else {cout<<endl;}		
	goto start;
}
