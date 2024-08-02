
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

const char *  genMove(){
  srand(time(NULL));
  int r = rand() % 3;
  switch(r){
    case 0:
      return "Rock";
      break;
    case 1:
      return "Paper";
      break;
    case 2: 
      return "Scissors";
      break;
    default:
      return "ERROR";
      }
}

void victory(){
  printf("Congrats you won!!\n");
}
void loss(){
  printf("You lost, better luck next time!\n");
}
void tie(){
  printf("Great minds think alike, TIE\n");
}
void error(){
  printf("ERROR: Unexpected Error\n");
}
