
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// 3 entities:

// Player
// Board
// Game


class Player{
string name;
char symbol;
public:
Player(string n,char s){
    name = n;
    symbol = s;
}
char getSymbol(){
    return symbol;
}
string getName(){
    return name;
}
};
class Board{
 char board[3][3];
public:
//constructor for initialising board
 Board(){
   for(int i=0;i<=2;i++){
       for(int j=0;j<=2;j++){
           board[i][j] = '-';
       }
   }
 }
   void display(){
        for(int i=0;i<=2;i++){
       for(int j=0;j<=2;j++){
           cout<<" "<<board[i][j]<<" ";
       }
       cout<<endl;
   }
   }
   bool isBoardFull(){
        for(int i=0;i<=2;i++){
       for(int j=0;j<=2;j++){
           if(board[i][j]=='-') return false;
       }
   }
   return true;
   }
 bool checkWinner(){
     //check horizontal
     for(int i=0;i<=2;i++){
         if(board[i][0]!='-' && board[i][0]==board[i][1] && board[i][2]==board[i][1]) return true;
     }
     //check vertical
     for(int i=0;i<=2;i++){
         if(board[0][i]!='-' && board[0][i]==board[1][i] && board[1][i]==board[2][i]) return true;
     }
     //check diagonal
     if(board[0][0]!='-' && board[0][0]==board[1][1] && board[1][1]==board[2][2]) return true;
     //chheck antidiagonal
     if(board[2][0]!='-' && board[2][0]==board[1][1] && board[1][1]==board[0][2]) return true;
     return false;
 }
 bool makeMove(int row,int col,char symbol){
     if(board[row][col]=='-'){
         board[row][col] = symbol;
         return true;
     }
     else return false;
 }
};
class Game{


 Board b;
 Player p1{"Rohan",'X'};
 Player p2{"Anubhab",'O'};
public:
 //start the game
 void start(){
    
     Player currplayer(p1); //copy constructor called
     bool gameOver = false;
     while(!gameOver){
             b.display();
             cout<<"Select a position to make your move"<<endl;
             int i = 0,j = 0;
             cin>>i>>j;
             bool check = b.makeMove(i,j,currplayer.getSymbol());
             if(!check){
                 cout<<"Not a valid position, Please select another position!!"<<endl;
                 continue;
             }
             else{
        //after every move check whether there is a winner
              if(b.checkWinner()){
                  gameOver = true;
                  cout<<currplayer.getName()<<" won!Congratulations"<<endl;
                  b.display();
                  return;
              }
              //Draw match
              else if(b.isBoardFull()){
                  gameOver = true;
                  cout<<"Match drawn!!" <<endl;
                   b.display();
                  return;
              }
        //After every successfull move of a player turns are reversed
          if(currplayer.getName()==p1.getName()) currplayer = p2;
          else currplayer = p1;
             }
     }
 }
};
int main() {
   Game g;
   g.start();
   return 0;
}


