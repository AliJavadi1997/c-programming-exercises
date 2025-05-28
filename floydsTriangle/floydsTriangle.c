#include <stdio.h>

int main(){
  int num, line;
  num = 1;
  for(line = 1; line <= 10; line++){
    for(int i = 0; i < line; i++){
      printf("%d ", num++);
    }
    putchar('\n');
  }
  return 0;
}
