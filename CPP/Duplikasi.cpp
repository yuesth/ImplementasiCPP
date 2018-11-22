#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main(){
int i,j,n,x[100];bool duplikasi;
  cout<<"banyak data : ";cin>>n;
  for (i=1;i<=n;i++) {
    do {   
        x[i]=rand()%10+1;
        duplikasi=false; 
		j=i-1;
        while (j>=1){ 
           if (x[i]==x[j]){
              duplikasi=true;
			  j=0
           }else{
           	j--;
		   }
         }
     }while (duplikasi==true);
     cout<<x[i]<<" ";
  }  
}
