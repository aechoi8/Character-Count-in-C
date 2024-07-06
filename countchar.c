#include <stdio.h>

int main(){
  long nc;

  nc = 0;
  int c;

  while ((c = getchar()) != EOF){
    if (c != '\n'){
      nc++;
      printf("Character Count: %ld\n", nc);
    }
  }
  return 0;
}
