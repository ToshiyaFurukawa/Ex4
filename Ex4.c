#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i,s,head = 0,tail = 0;
  char name[10];
  
  printf("Who are you?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  printf("Tossing a coin...\n");
  srand(time(NULL));
  for(i = 1; i < 6; i++){
    s = rand()%2;
    
    if(s == 0){
      printf("Round %d: Heads\n",i);
      head++;
    }
    else {
      printf("Round %d: Tails\n",i);
      tail++;
    }
    
    if(head == 2 || tail == 2)break;
  }
  printf("Heads: %d, Tails: %d\n",head,tail);
  if(head == 2)printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  return 0;
}
