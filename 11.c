#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
  int x,y;
  char name[20];
  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling dice...\n");
  srand(time(NULL));
  x = rand()%6+1;
  y = rand()%6+1;
  printf("Die 1: %d\n",x);
  printf("Die 2: %d\n",y);
  printf("Total value: %d\n",x+y);
  if((x+y)>7){
    printf("%s won!\n",name);
  }
  else {
    printf("%s lost\n",name);
  }
}
