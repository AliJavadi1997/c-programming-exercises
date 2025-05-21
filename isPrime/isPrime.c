#include <stdio.h>

int main(){
  int num, i, isPrime = 1;

  printf("Please write an integer: ");
  if(scanf("%d", &num) != 1){
    printf("Invalid Input! \n");
  }else{
    for(int i = 2; i*i <= num; i++){
      if(num%i == 0){
        isPrime = 0;
        break;
      }
    }
  }
 
  if(isPrime){
    printf("%d is a prime number!\n", num);
  }else{
    printf("%d is not a prime number!\n", num);
  }
};
