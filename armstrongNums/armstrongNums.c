#include <stdio.h>

int main(){
  int num, digit, original, sum;
  printf("Three-digit Armstrong numbers are: \n");

  for(num = 100; num <= 999; num++){
    original = num;
    sum = 0;
    while(original > 0){
      digit = original % 10;
      sum += digit * digit * digit;
      original /= 10;
    }

    if(sum == num){
      printf("%d\n", num);
    }
  }
  
  return 0;
}
