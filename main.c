#include<stdio.h>
#include"gameHelper.h"

typedef struct { char *key; int val; } moveTable;

static moveTable lookuptable[] = {
    { "Rock", 1 }, { "Paper", 2 }, { "Sciccors", 3 }
};

#define NKEYS (sizeof(lookuptable)/sizeof(moveTable))

int keyfromstring(char *key)
{
    int i;
    for (i=0; i < NKEYS; i++) {
        moveTable *sym = &lookuptable[i];
        if (strcmp(sym->key, key) == 0)
            return sym->val;
    }
    return -1;
}

void main(){ 
  char  playerMove[] = "Paper";
  printf("Enter your move (Rock, Paper, or Scissors):");
  scanf("%s", playerMove);
  switch(keyfromstring(*genMove())){
    case 1:
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

    case 2:
      if (playerMove == "Scissors"){
        victory();
      }
      else if (playerMove == "Rock"){
        loss();
      }
      else{
        tie();
      }
      break;

    case 3:
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
