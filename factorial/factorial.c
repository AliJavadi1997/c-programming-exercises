#include <stdio.h>

int main(){
  int num, factorial, tmp;
  printf("Please enter a non-negative integer: \n");
  scanf("%d", &num);
  factorial = 1;
  tmp = num;
  while(num > 1){
    factorial *= num;
    num--;
  }
  printf("%d! = %d\n", tmp, factorial);
}
