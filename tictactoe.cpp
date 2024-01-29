#include <iostream>
using namespace std;

 
void display(char board[3][3]){

  
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<< board[i][j]<<" | ";  
        }
        cout<<endl;
        
    }
 
}

bool win(char board[3][3],char player){
    if((board[0][0]==player && board[0][1]==player && board[0][2]==player) || (board[0][0]==player && board[1][1]==player && board[1][2]==player) || (board[0][2]==player && board[1][2]==player && board[2][2]==player) || (board[0][0]==player && board[1][1]==player && board[2][2]==player) || (board[0][0]==player && board[1][0]==player && board[2][0]==player) || (board[0][1]==player && board[1][1]==player && board[2][1]==player) ||(board[ 0][2]==player && board[1][2]==player && board[2][2]==player) || (board[2][0]==player && board[1][1]==player && board[0][2]==player)) {
        return true;
    }

    else{ return false;}
}

bool isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == '*') {
                return false;
            }
        }
    }
    return true;
}


int main(){

    char board[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j]='*';
        }
        
    }
    
    

    char player='X';
    
    while (true)
    {
    display(board);

    int r,c;
    cout<<"Player "<<player<<"Enter the row and col number to take :";
    cin>>r>>c;
    
    board[3][3]=board[r][c];

    if (r<0, r<3, c<0 , c<3 , board[r][c] !='*')
    {
        cout<<"This cannot be done plz enter another row and col ";
        cin>>r>>c;
    }

    board[r][c]=player;

       if (win(board, player)) {
            display(board);
            cout << "Player " << player << " wins!" << endl;
            break;
        }

        if (isBoardFull(board)) {
            display(board);
            cout << "It's a tie!" << endl;
            break;
        }


        player = (player == 'X') ? 'O' : 'X';
    }
    
  return 0;

 }

    
