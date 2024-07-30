#include<stdio.h>
#include<gameHelper.h>

void main(){
  std::String playerMove;
  printf("Enter your move (Rock, Paper, or Scissors):");
  std::cin >> playerMove;
  switch(genMove()){
    case "Rock":
      if (playerMove == "Paper"){
      victory();
      }
      else if (playerMove == "Scissors"){
        loss();
      }
      else {
        tie();
      }
      break;
    case "Paper":
      if (playerMove == "Scissors"){
        victory();
      }
      else if (playerMove == "Rock"){
        loss();
      }
      else {
        tie();
      }
      break;

    case "Scissors":
      if (playerMove == "Rock"){
        victory();
      }
      else if (playerMove == "Paper"){
        loss();
      }
      else {
        tie();
      }
      break;
    default:
      error();
  }
}
