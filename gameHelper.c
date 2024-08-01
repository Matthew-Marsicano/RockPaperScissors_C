#include<gameHelper.h>
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
  printf("Congrats you won!!");
}
void loss(){
  printf("You lost, better luck next time!");
}
void tie(){
  printf("Great minds think alike, TIE!");
}
void error(){
  printf("ERROR: Unexpected Error");
}
