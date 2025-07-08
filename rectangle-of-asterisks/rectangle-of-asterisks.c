#include <stdio.h>

void printRectangle(int side_1, int side_2, char character);

int main(){
  int side_1, side_2;
  char character;
  printf("Please enter the length of the side 1: (The unit is asterisk)\n");
  scanf("%d", &side_1);
  printf("Please enter the length of the side 2: (the unit is asterisk) \n");
  scanf("%d", &side_2);
  printf("Please enter a character: \n");
  scanf(" %c", &character);
  printRectangle(side_1, side_2, character);
  return 0;
}

void printRectangle(int side_1, int side_2, char character){
  for(int i = 0; i < side_1; i++){
    for(int j = 0; j < side_2; j++){
      putchar(character);
    }
    printf("\n");
  }
}
