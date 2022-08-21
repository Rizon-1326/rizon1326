package ticGame;

import java.util.Arrays;
import java.util.Scanner;

public class Game {
 private static final char EMPTY_BOX=' ';
 private static final char PLAYER_ONES_SYMBOL ='X';
 private static final char PLAYER_TWOS_SYMBOL ='0';
 
 private final char[][] gameboard = new char[3][3];
 
 private final Scanner input=new Scanner(System.in);
 
 private String playerOne,playerTwo,currentPlayer,whoWontheGAme;
 
 public void startGame() {
   initializeBoard();
   askForUserNames();
   
   while(isGameNotOver()) {
   drawBoard();
   printPlayerTurn();
   askForManeuver();
   }
   printGameOver();
 }
 private void initializeBoard(){
   for(char chars[] : gameboard) {
     Arrays.fill(chars,EMPTY_BOX);
   }
 }
 
 private void  askForUserNames(){
   System.out.println("welcome to tictactoe!");
   System.out.println("what's your name?");
   playerOne = input.nextLine();
   
   System.out.println("who are you playing with?");
   playerTwo = input.next();
   
   System.out.println("who is playing first? press"+ "\n1 for " + playerOne + "\n2 for "+playerTwo);
   
   int player = input.nextInt();
   currentPlayer=player==1?playerOne : playerTwo;
 }
 private boolean isGameNotOver() {
   return !(isBoardIsFull() || hasAnyPlayerWon());
 }
 private void  drawBoard(){
   System.out.println("|---|---|---|");
   for(char chars[] : gameboard) {
     System.out.printf("| %c | %c | %c |\n",chars[0],chars[1],chars[2]);
     System.out.println("|---|---|---|");
   }
   
 }
 private void   printPlayerTurn(){
   System.out.println(whoIsPlaying()+ "'s turn");
 }
private void    askForManeuver(){
  int row,col;
  
  do {
    System.out.println("enter a row number(0,1 or 2)");
    row=input.nextInt();
    
    System.out.println("enter a col number(0,1 or 2)");
    col=input.nextInt();
  }
  while(!validateInput(row,col));
  
  if(whoIsPlaying().equals(playerOne)) {
    gameboard[row][col]=PLAYER_ONES_SYMBOL;
    currentPlayer=playerTwo;
  }
  else
    {
      gameboard[row][col]=PLAYER_TWOS_SYMBOL;
      currentPlayer=playerOne;
    }
 }
private void   printGameOver(){
  drawBoard(); 
  System.out.println("game over!");
  
  if(whoWontheGAme!=null) {
    System.out.println(whoWontheGAme + " won the game, "+ "congratulations!");
  }
  else System.out.println("it's a tie,play again!");
}
private boolean isBoardIsFull() {
  boolean result = true;
  
  for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
      if(gameboard[1][j]==EMPTY_BOX) {
        result =false;
        break;
      }
    }
  }
  return result;
}
 
private boolean hasAnyPlayerWon() {
  char cross=' ';
  
  for(int i=0;i<3;i++) {
    if(gameboard[i][0]==gameboard[i][1] && gameboard[i][1]==gameboard[i][2] && gameboard[i][0]!=EMPTY_BOX){
      cross = gameboard[i][0];
      }
     }
  
  for(int i=0;i<3;i++) {
    if(gameboard[0][i]==gameboard[1][i] && gameboard[1][i]==gameboard[2][i] && gameboard[0][i]!=EMPTY_BOX){
      cross = gameboard[0][i];
      }
     }
  if(gameboard[0][0]==gameboard[1][1] && gameboard[1][1]==gameboard[2][2] && gameboard[0][0]!=EMPTY_BOX){
    cross = gameboard[0][0];
  }
  if(gameboard[2][0]==gameboard[1][1] && gameboard[1][1]==gameboard[0][2] && gameboard[2][0]!=EMPTY_BOX){
    cross = gameboard[2][0];
  }
  
  if(cross==PLAYER_ONES_SYMBOL) {
    whoWontheGAme=playerOne;
  }
  else if(cross==PLAYER_TWOS_SYMBOL) {
    whoWontheGAme=playerTwo;
  }
  
  return whoWontheGAme!=null;
   }

private String whoIsPlaying(){
  return currentPlayer;
}
private boolean validateInput(int row,int col) {
  boolean result = false;
  
  if(row<0 ||col<0 ||row>2 || col>2) {
    System.out.println("the position is off the bounds of the board,try again");
  }
  else if(gameboard[row][col]!=EMPTY_BOX) {
    System.out.println("someone has already made a move at this position,try again");
  }
  else result=true;
  
  return result;
  }
}
