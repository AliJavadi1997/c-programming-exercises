#include <stdio.h>

int main(){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10 - i - 1; j++){
      putchar(' ');
    }
    for(int k = 0; k < i + 1; k++){
      putchar('*');
    }
    putchar('\n');
  }
  return 0;
}
