#include <stdio.h>

int isEven(int num);

int main(){
  while(1){
    int num;
    printf("Please enter an integer: (To exit enter 0)\n");
    if(scanf("%d", &num) != 1){
      if(num == 0){
        printf("Exit program! Bye Bye! \n");
        break;
      }
      printf("Invalid input!\n");
      break;
    }else{
      if(num % 2 == 0){
        printf("This is an even number! \n");
      }else{
        printf("This is an odd number! \n");
      }
    }
  }
}
