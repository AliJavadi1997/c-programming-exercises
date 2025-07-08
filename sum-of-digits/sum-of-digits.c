#include <stdio.h>

void sumOfDigits(int num);

int main(){
  int num;

  printf("Please enter an integer: \n");
  if(scanf("%d", &num) != 0){
    sumOfDigits(num);
  }else{
    printf("Wrong input! \n");
    return 1;
  }
}

void sumOfDigits(int num){
  int tmp = num;
  int sum = 0;
  printf("Initial values: num = %d\ttmp= %d\tsum = %d\t\n", num, tmp, sum);
  printf("Values inside the loop: \n");
  while(tmp > 0){
    sum += tmp % 10;
    tmp /= 10;
    printf("tmp = %d\tsum = %d\t\n", tmp, sum);
  }
  printf("Sum of digits of the integer %d is %d. \n", num, sum);
}
