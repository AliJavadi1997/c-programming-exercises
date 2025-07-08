#include <stdio.h>
#include <math.h>

int roundNum(float num);

int main(){
  int isRunning = 1;
  float num;

  while(1){
    printf("Please enter a floating point number: (to exit enter 0) \n");

    if(scanf("%f", &num) != 1){
      printf("Wrong input! \n");
      break;
    }

    if(num == 0) break;
    printf("%f -> %d \n", num, roundNum(num));
  }

  return 0;
}

int roundNum(float num){
  return ceil(num + .5);
}
