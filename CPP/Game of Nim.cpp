#include<iostream>
#include<stdlib.h>
#include<time.h>    
using namespace std;
main(){
	srand((unsigned)time(NULL));
	int initial=(rand()%91)+10;
	int turn=1;//rand()%2;
	int mode=1;//rand()%2;
	
	cout<<"Starting  : "<<initial<<endl;
	if(turn==0){
		cout<<"You First"<<endl;
	}else{
		cout<<"Computer First"<<endl;
	}
	
	int move;
	bool win;
	cout<<"Enemy Lv  : ";
	if(mode==0){
		cout<<"Fool"<<endl;
		while(initial>=0){
			if(turn==0){
				cout<<"Your turn : ";cin>>move;
				if(initial==1){
					if(move==1){
						initial-=move;
						cout<<"Remaining : "<<initial<<endl;
					}else{
						cout<<"illegal move"<<endl;
					}
				}else if(move<=0 || move>=initial/2+1){
					cout<<"illegal move"<<endl;
				}else{
					initial-=move;
					cout<<"Remaining : "<<initial<<endl;
					turn=1;
				}
				if(initial==0){
					win=false;
					goto end;
				}
			}else if(turn==1){
				if(initial==1){
					move=1;	
				}else{
					move=rand()%(initial/2)+1;
				}
				cout<<"Computers : "<<move;
				initial-=move;
				cout<<endl<<"Remaining : "<<initial<<endl;
				if(initial==0){
					win=true;
					goto end;
				}
				turn=0;
			}
		}
	}else{
		cout<<"Smart"<<endl;
		while(initial>=0){
			if(turn==0){
				cout<<"Your turn : ";cin>>move;
				if(initial==1){
					if(move==1){
						initial-=move;
						cout<<"Remaining : "<<initial<<endl;
					}else{
						cout<<"illegal move"<<endl;
					}
				}else if(move<=0 || move>=initial/2+1){
					cout<<"illegal move"<<endl;
				}else{
					initial-=move;
					cout<<"Remaining : "<<initial<<endl;
					turn=1;
				}
				if(initial==0){
					win=false;
					goto end;
				}
			}else if(turn==1){
				if(initial==1){
					move=1;	
				}else{
					//yang beda 1 3 7 15 31 63 
					int x=(initial/2);
					if(x>=63){
						move=63;
					}else if(x>=31){
						move=31;
					}else if(x>=15){
						move=15;
					}else if(x>=7){
						move=7;
					}else if(x>=3){
						move=3;
					}else if(x>=1){
						move=1;
					}
				}
				cout<<"Computers : "<<move;
				initial-=move;
				cout<<endl<<"Remaining : "<<initial<<endl;
				if(initial==0){
					win=true;
					goto end;
				}
				turn=0;
			}
		}
	}
	
	end:
	if(win==true){
		cout<<"You Win"<<endl;
	}else{
		cout<<"You Lose"<<endl;
	}
}
