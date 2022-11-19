#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
static int board[3][3]={0};

void show(){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j<2){
                if(board[i][j]==0)
                cout<<" "<<" "<<" |";
                else if(board[i][j]==1)
                cout<<" "<<"x"<<" |";
                else
                cout<<" o |";
            }
            else{
                 if(board[i][j]==0)
                cout<<" "<<" "<<" ";
                else if(board[i][j]==1)
                cout<<" "<<"x"<<" ";
                else
                cout<<" o ";
            }
        }
        cout<<endl;
        if(i<2)
        cout<<"-----------";
        cout<<endl;
    }
}

void finish_user(char *ptr){
    if((board[0][0]==1 && board[0][1]==1 && board[0][2]==1) || (board[1][0]==1 && board[1][1]==1 && board[1][2]==1) || (board[2][0]==1 && board[2][1]==1 && board[2][2]==1) || (board[0][0]==1 && board[1][1]==1 && board[2][2]==1) || (board[0][2]==1 && board[1][1]==1 && board[2][0]==1) || (board[0][0]==1 && board[1][0]==1 && board[2][0]==1) || (board[0][1]==1 && board[1][1]==1 && board[2][1]==1) || (board[0][2]==1 && board[1][2]==1 && board[2][2]==1)){//made by pratham kumar //linked in profile www.linkedin.com/in/pratham-kumar-a3000i
        *ptr='w';
        cout<<"*** ** *** ** YOU WIN ** *** ** ***"<<endl;
        cout<<"*** ** *** * VERY GOOD * *** ** ***"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=1){
                    board[i][j]=0;
                }
            }
        }
        return;
    }
    *ptr='l';
}

void computer(char *ptr2){
    srand(time(0));
    if(board[0][0]==2 && board[0][1]==2 && board[0][2]==0){
        board[0][2]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][0]==2 && board[0][2]==2 && board[0][1]==0){
        board[0][1]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][1]==2 && board[0][2]==2 && board[0][0]==0){
        board[0][0]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[1][0]==2 && board[1][1]==2 && board[1][2]==0){
        board[1][2]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[1][1]==2 && board[1][2]==2 && board[1][0]==0){
        board[1][0]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[1][0]==2 && board[1][2]==2 && board[1][1]==0){
        board[1][1]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[2][1]==2 && board[2][2]==2 && board[2][0]==0){
        board[2][0]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[2][0]==2 && board[2][2]==2 && board[2][1]==0){
        board[2][1]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[2][0]==2 && board[2][1]==2 && board[2][2]==0){
        board[2][2]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][0]==2 && board[1][0]==2 && board[2][0]==0){
        board[2][0]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[2][0]==2 && board[0][0]==2 && board[1][0]==0){
        board[1][0]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[1][0]==2 && board[2][0]==2 && board[0][0]==0){
        board[0][0]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[1][1]==2 && board[2][1]==2 && board[0][1]==0){
        board[0][1]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][1]==2 && board[2][1]==2 && board[1][1]==0){
        board[1][1]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][1]==2 && board[1][1]==2 && board[2][1]==0){
        board[2][1]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[1][2]==2 && board[2][2]==2 && board[0][2]==0){
        board[0][2]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][2]==2 && board[2][2]==2 && board[1][2]==0){
        board[1][2]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][2]==2 && board[1][2]==2 && board[2][2]==0){
        board[2][2]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][0]==2 && board[1][1]==2 && board[2][2]==0){
        board[2][2]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[1][1]==2 && board[2][2]==2 && board[0][0]==0){
        board[0][0]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][0]==2 && board[2][2]==2 && board[1][1]==0){
        board[1][1]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][2]==2 && board[1][1]==2 && board[2][0]==0){
        board[2][0]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[1][1]==2 && board[2][0]==2 && board[0][2]==0){
        board[0][2]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    if(board[0][2]==2 && board[2][0]==2 && board[1][1]==0){
        board[1][1]=2;
        cout<<"** *** ** *** COMPUTER WIN *** ** *** **"<<endl;
        cout<<"LOSER LOSER LOSER LOSER LOSER LOSER LOSER"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!=2){
                    board[i][j]=0;
                }
            }
        }
        *ptr2='w';
        return;
    }
    //to not let other player win

    if(board[0][0]==1 && board[0][1]==1 && board[0][2]==0){
        board[0][2]=2;
        return;
    }
    if(board[0][1]==1 && board[0][2]==1 && board[0][0]==0){
        board[0][0]=2;
        return;
    }
    if(board[0][0]==1 && board[0][2]==1 && board[0][1]==0){
        board[0][1]=2;
        return;
    }//
    if(board[1][0]==1 && board[1][1]==1 && board[1][2]==0){
        board[1][2]=2;
        return;
    }
    if(board[1][1]==1 && board[1][2]==1 && board[1][0]==0){
        board[1][0]=2;
        return;
    }
    if(board[1][0]==1 && board[1][2]==1 && board[1][1]==0){
        board[1][1]=2;
        return;
    }//
    if(board[2][1]==1 && board[2][2]==1 && board[2][0]==0){
        board[2][0]=2;
        return;
    }
    if(board[2][0]==1 && board[2][2]==1 && board[2][1]==0){
        board[2][1]=2;
        return;
    }
    if(board[2][1]==1 && board[2][0]==1 && board[2][2]==0){
        board[2][2]=2;
        return;
    }//

    //cols

    if(board[0][0]==1 && board[1][0]==1 && board[2][0]==0){
        board[2][0]=2;
        return;
    }
    if(board[0][0]==1 && board[2][0]==1 && board[1][0]==0){
        board[1][0]=2;
        return;
    }
    if(board[2][0]==1 && board[1][0]==1 && board[0][0]==0){
        board[0][0]=2;
        return;
    }//
    if(board[0][1]==1 && board[1][1]==1 && board[2][1]==0){
        board[2][1]=2;
        return;
    }
    if(board[2][1]==1 && board[1][1]==1 && board[0][1]==0){
        board[0][1]=2;
        return;
    }
    if(board[0][1]==1 && board[2][1]==1 && board[1][1]==0){
        board[1][1]=2;
        return;
    }//
    if(board[0][2]==1 && board[1][2]==1 && board[2][2]==0){
        board[2][2]=2;
        return;
    }
    if(board[2][2]==1 && board[1][2]==1 && board[0][2]==0){
        board[0][2]=2;
        return;
    }
    if(board[2][2]==1 && board[0][2]==1 && board[1][2]==0){
        board[1][2]=2;
        return;
    }//

    //diagnols

    if(board[0][0]==1 && board[1][1]==1 && board[2][2]==0){
        board[2][2]=2;
        return;
    }
    if(board[0][0]==1 && board[2][2]==1 && board[1][1]==0){
        board[1][1]=2;
        return;
    }
    if(board[2][2]==1 && board[1][1]==1 && board[0][0]==0){
        board[0][0]=2;
        return;
    }

    if(board[0][2]==1 && board[1][1]==1 && board[2][0]==0){
        board[2][0]=2;
        return;
    }
    if(board[0][2]==1 && board[2][0]==1 && board[1][1]==0){
        board[1][1]=2;
        return;
    }
    if(board[2][0]==1 && board[1][1]==1 && board[0][2]==0){
        board[0][2]=2;
        return;
    }

    //random
    char flag='f';
    do{
        int row=rand()%3;
        int col=rand()%3;
        if(board[row][col]==0){
            board[row][col]=2;
            flag='k';
        }
        
    }while(flag=='f');


}

int main(void){
    char win='l';
    cout<<"\n****** WELCOME TO TIC-TAC-TOE *******\n"<<endl;
    show();
    cout<<"You Are X"<<endl;
    cout<<"\n where do you want mark the box? "<<endl;
    int row;int col;
    do{
        cout<<"enter the coordinates ";
        do{
        do{
        cin>>row>>col;
        if(row>=3 || col>=3){
            cout<<"both cordinates should be less than 3"<<endl;
        }
        }while(row>=3 || col>=3);
        cout<<endl;
        if(board[row][col]!=0){
            cout<<"box occupied"<<endl;
            cout<<"please choose other box"<<endl;
        }
        }while(board[row][col]!=0);
        board[row][col]=1;
        finish_user(&win);
        bool flag=1;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]==0){
                    flag=0;
                }
            }
        }
        if(flag==1){
            cout<<"\n** *** ** *** DRAW *** ** *** **"<<endl;
            cout<<"** *** ** WELL PLAYED ** **** **"<<endl;
            win='w';
            break;
        }
        if(win!='w'){
            computer(&win);
        }
        cout<<endl;
        show();

    }while(win=='l');


}