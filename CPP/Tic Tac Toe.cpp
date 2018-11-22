#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
int show_board(int board[4][4]){
	int i, j;
	cout<<"+-+-+-+"<<endl;
	for(i=1;i<=3;i++){
		cout<<"|";
		for(j=1;j<=3;j++){
			//cout<<board[i][j]<<"|";
			if(board[i][j]==1){
				cout<<"O|";
			}else if(board[i][j]==2){
				cout<<"X|";
			}else{
				cout<<" |";
			}
		}
		cout<<endl<<"+-+-+-+"<<endl;
	}
	cout<<endl;
}
int cek_win(int board[4][4]){
	/*
	0 = computer
	1 = player
	2 = not yet
	*/
	int i, j, out;
	for(i=1;i<=3;i++){
		if(board[i][1]==board[i][2] && board[i][2]==board[i][3] && board[i][1]==board[i][3]){
			if(board[i][1]==1 && board[i][2]==1 && board[i][3]==1){
				out=1;
			}else if(board[i][1]==2 && board[i][2]==2 && board[i][3]==2){
				out=0;
			}else{
				out=2;
			}
		}
	}
	for(j=1;j<=3;j++){
		if(board[1][j]==board[2][j] && board[2][j]==board[3][j] && board[1][j]==board[2][j]){
			if(board[1][j]==1 && board[2][j]==1 && board[3][j]==1){
				out=1;
			}else if(board[1][j]==2 && board[2][j]==2 && board[3][j]==2){
				out=0;
			}else{
				out=2;
			}
		}
	}
	if(board[1][1]==board[2][2] && board[2][2]==board[3][3] && board[1][1]==board[3][3]){
		if(board[1][1]==1 && board[2][2]==1 && board[3][3]==1){
			out=1;
		}else if(board[1][1]==2 && board[2][2]==2 && board[3][3]==2){
			out=0;
		}else{
			out=2;
		}
	}
	if(board[1][3]==board[2][2] && board[2][2]==board[3][1] && board[1][3]==board[3][1]){
		if(board[1][3]==1 && board[2][2]==1 && board[3][1]==1){
			out=1;
		}else if(board[1][3]==2 && board[2][2]==2 && board[3][1]==2){
			out=0;
		}else{
			out=2;
		}
	}
	return(out);
}
int AI(int board[4][4], int &n, int &m){
	int i, j;
	for(i=1;i<=3;i++){
		if(board[i][1]==1 && board[i][2]==1 && board[i][3]==0){
			n=i;
			m=3;
			return(n,m);
			break;
		}else if(board[i][1]==1 && board[i][3]==1 && board[i][2]==0){
			n=i;
			m=2;
			return(n,m);
			break;
		}else if(board[i][2]==1 && board[i][3]==1 && board[i][1]==0){
			n=i;
			m=1;
			return(n,m);
			break;
		}
	}
	for(j=1;j<=3;j++){
		if(board[1][j]==1 && board[2][j]==1 && board[3][j]==0){
			n=3;
			m=j;
			return(n,m);
			break;
		}else if(board[1][j]==1 && board[3][j]==1 && board[2][j]==0){
			n=2;
			m=j;
			return(n,m);
			break;
		}else if(board[2][j]==1 && board[3][j]==1 && board[1][j]==0){
			n=1;
			m=j;
			return(n,m);
			break;
		}
	}
	if(board[1][1]==1 && board [2][2]==1 && board[3][3]==0){
		n=3;
		m=3;
		return(n,m);
	}else if(board[1][1]==1 && board [3][3]==1 && board[2][2]==0){
		n=2;
		m=2;
		return(n,m);
	}else if(board[2][2]==1 && board [3][3]==1 && board[1][1]==0){
		n=1;
		m=1;
		return(n,m);
	}else if(board[1][3]==1 && board [2][2]==1 && board[3][1]==0){
		n=3;
		m=1;
		return(n,m);
	}else if(board[1][3]==1 && board [3][1]==1 && board[2][2]==0){
		n=2;
		m=2;
		return(n,m);
	}else if(board[2][2]==1 && board [3][1]==1 && board[1][3]==0){
		n=1;
		m=3;
		return(n,m);
	} 
}
int AIwin(int board[4][4], int &n, int &m){
	int i, j;
	for(i=1;i<=3;i++){
		if(board[i][1]==2 && board[i][2]==2 && board[i][3]==0){
			n=i;
			m=3;
			return(n,m);
			break;
		}else if(board[i][1]==2 && board[i][3]==2 && board[i][2]==0){
			n=i;
			m=2;
			return(n,m);
			break;
		}else if(board[i][2]==2 && board[i][3]==2 && board[i][1]==0){
			n=i;
			m=1;
			return(n,m);
			break;
		}
	}
	for(j=1;j<=3;j++){
		if(board[1][j]==2 && board[2][j]==2 && board[3][j]==0){
			n=3;
			m=j;
			return(n,m);
			break;
		}else if(board[1][j]==2 && board[3][j]==2 && board[2][j]==0){
			n=2;
			m=j;
			return(n,m);
			break;
		}else if(board[2][j]==2 && board[3][j]==2 && board[1][j]==0){
			n=1;
			m=j;
			return(n,m);
			break;
		}
	}
	if(board[1][1]==2 && board [2][2]==2 && board[3][3]==0){
		n=3;
		m=3;
		return(n,m);
	}else if(board[1][1]==2 && board [3][3]==2 && board[2][2]==0){
		n=2;
		m=2;
		return(n,m);
	}else if(board[2][2]==2 && board [3][3]==2 && board[1][1]==0){
		n=1;
		m=1;
		return(n,m);
	}else if(board[1][3]==2 && board [2][2]==2 && board[3][1]==0){
		n=3;
		m=1;
		return(n,m);
	}else if(board[1][3]==2 && board [3][1]==2 && board[2][2]==0){
		n=2;
		m=2;
		return(n,m);
	}else if(board[2][2]==2 && board [3][1]==2 && board[1][3]==0){
		n=1;
		m=3;
		return(n,m);
	}
}
int corner(int &n, int &m, int &a){
	if(n==1 || n==3 || m==1 ||m==3){
		a++;
	}
	return(a);
}
main(){
	srand(time(NULL));
	int board[4][4], i, j;
	int W=0, L=0, D=0;
	cout<<"TIC TAC TOE"<<endl;
	cout<<"Ver. 1.3.7"<<endl;
	int turn=rand()%2;
	int turn1=turn;
	start:
	cout<<"W:"<<W<<" L:"<<L<<" D:"<<D<<endl;
	//set board
	//0= empty, 1=player, 2=komputer
	/*Change Log
	1.0.0 = release
	1.0.1 = player + pc
	1.1.0 = algoritma winning mulai project
	1.1.1 = fixing bug algo winning + algo winning diagonal
	1.1.2 = fixing bug algo winning + algo end
	1.1.3 = fixing bug algo winning
	1.1.4 = mulai pake return utk algo winning
	1.1.5 = algo winning 90%, msh muncul PC jalan 2x + pemikiran algo DRAW
	1.1.6 = WINNING 100%, DRAW 0% + illegal move
	1.2.0 = WINNING 100%+ illegal move
	1.2.1 = DRAW 25%
	1.2.2 = Mulai Change Log
	1.2.3 = DRAW 100%, mulai system("cls");
	1.2.4 = cls 50%
	1.2.5 = cls 75%, AI mode 0%, Random Mode 100%, 2P mode 0%
	1.2.6 = cls 100%, AI 0% Random 100% 2P 0%
	1.2.7 = AIdef 50%, AIoff 0%, 2P 0%
	1.3.0 = AIdef 100% AIoff 0% 2P 0%
	1.3.1 = AIoff 25% 2P 0%
	1.3.2 = AIoff 100% 2P 0%
	1.3.3 = 2P 0% + Counter WLD
	1.3.4 = corner counter
	1.3.5 = ganti turn
	1.3.7 = never LOSE. 2P ga jadi
	*/
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			board[i][j]=0;
		}
	}
	show_board(board);
	/*
	turn = 0 -> player
	turn = 1 -> komputer
	*/
	int x, y, counter=0, win=0, counter2=0;
	bool draw=false, PConGO=true;
	while(counter<=9){
		if(counter==9){
			draw=true;
			goto draw;
			break;
		}else if(turn==0){
			cout<<"Your Move: ";
			cin>>x>>y;
			if(board[x][y]==0){
				board[x][y]=1;
				system("cls");
				show_board(board);
				turn=1;
				counter++;
				corner(x,y,counter2);
				goto cek_win;
			}else{
				turn=0;
				cout<<"Illegal Move"<<endl;
			}
		}else if(turn==1){
			PConGO=true;
			cout<<"Computer : ";
			while(PConGO==true){
				if(board[2][2]==0){
					x=2;
					y=2;
				}else if(board[1][1]==1 && board[3][3]==1 || board[1][3]==1 && board[3][1]==1){
					int a2=rand()%2;
					if(a2==0){
						x=2;
						y=rand()%3+1;
					}else{
						x=rand()%3+1;
						y=2;
					}
				}else if(board[1][1]==0 && corner(x,y,counter2)<=3){
					x=1;
					y=1;
				}else if(board[1][3]==0 && corner(x,y,counter2)<=3){
					x=1;
					y=3;
				}else if(board[3][1]==0 && corner(x,y,counter2)<=3){
					x=3;
					y=1;
				}else if(board[3][3]==0 && corner(x,y,counter2)<=3){
					x=3;
					y=3;
				}else{
					x=rand()%3+1;
					y=rand()%3+1;
				}
				AI(board,x,y);
				AIwin(board,x,y);
				if(board[x][y]==0){
					cout<<x<<" "<<y<<endl;
					board[x][y]=2;
					show_board(board);
					turn=0;
					PConGO=false;
					counter++;
					corner(x,y,counter2);
					goto cek_win;
				}else{
					PConGO=true;
				}
			}		
		}
		cek_win:
			if(cek_win(board)==0){
				win=2;
				goto end;
			}else if(cek_win(board)==1){
				win=1;
				goto end;
			}else if(cek_win(board)==2){
				
			}
	}
	
	end:{
		if(win==1){
			cout<<"YOU WIN"<<endl;
			W++;
		}else if(win==2){
			cout<<"YOU LOSE"<<endl;
			L++;
		}
	}
	draw:{
		if(draw){
			cout<<"DRAW"<<endl;
			D++;
		}else{
			
		}
	}
	turn=(W+L+D+turn1)%2;
	cout<<"W:"<<W<<" L:"<<L<<" D:"<<D<<endl;
	getch();
	system("cls");
	goto start;
	return 0;
}
