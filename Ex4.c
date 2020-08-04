#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i,s,head = 0,tail = 0;
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
    printf("%d\n",s);
    if(head == 2 || tail == 2)break;
  }
  printf("Heads: %d, Tails: %d\n",head,tail);
  return 0;
}
