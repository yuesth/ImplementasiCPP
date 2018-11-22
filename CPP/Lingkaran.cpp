#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct lingkaran {float x,y,r;};
       
main() {
   float jtp,tj;
   lingkaran L1,L2;
   srand(time(NULL));
   L1.x=rand()%100/4.0;L1.y=rand()%100/4.0;L1.r=rand()%100/5+1;
   L2.x=rand()%100/8.0;L2.y=rand()%100/8.0;L2.r=rand()%100/5+1;

   cout<<"("<<L1.x<<","<<L1.y<<") R = "<<L1.r<<endl;
   cout<<"("<<L2.x<<","<<L2.y<<") R = "<<L2.r<<endl;
   cout<<endl;
   jtp=sqrt(pow(L2.x-L1.x,2)+pow(L2.y-L1.y,2));
   tj=L1.r+L2.r;
   cout<<jtp<<" "<<tj<<endl;
   if(jtp==tj) cout<<"Bersinggungan";
    else 
     if(jtp>tj) cout<<"Saling Lepas";
       else 
         if (jtp < fabs(L1.r-L2.r)) cout<<"di dalam";
         else cout<<"berpotongan";
   getch();
}

