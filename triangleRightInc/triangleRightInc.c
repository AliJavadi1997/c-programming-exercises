#include <stdio.h>

int main(){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < i; j++){
      putchar(' ');
    }
    for(int k = 0; k < 10 - i; k++){
      putchar('*');
    }
    putchar('\n');
  }
  return 0;
}
