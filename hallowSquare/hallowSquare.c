#include <stdio.h>

int main(){
  int size, row, col;
  printf("Please enter the size of square: \n");
  
  if(scanf("%d", &size) != 1){
    printf("Invalid Input!\n");
  }

  for(int row = 0; row < size; row++){
    for(int col = 0; col < size; col++){
      if(row == 0 || row == size-1 || col == 0 || col == size-1){
        putchar('*');
      }else{
        putchar(' ');
      }
    }
    putchar('\n');
  }
  return 0;
}
