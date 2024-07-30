#include<gameHelper.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

const char * genMove(){
  srand(time(NULL));
  int r = rand() % 3;
  switch(r):
    case 0:
      return "Rock";
    case 1:
      return "Paper";
    case 2: 
      return "Scissors;
    default:
      return "ERROR;
}

void victory(){
  printf("Congrats you won!!");
}
void loss(){
  printf("You lost, better luck next time!");
}
