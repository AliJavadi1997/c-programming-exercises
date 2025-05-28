#include <stdio.h>

int main(){
  int i, num, isPrime;
  printf("Primes from 0 to 100: \n");
  for(num = 2; num <= 100; num++){
    isPrime = 1;
    for(i = 2; i * i <= num; i++){
      if(num % i == 0){
        isPrime = 0;
        break;
      }
    }
    if(isPrime){
      printf("%d ", num);
    }
  }
  printf("\n");
  return 0;
}
