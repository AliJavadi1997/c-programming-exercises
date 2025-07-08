#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(){
  int num1, num2;
  printf("Please enter the first integer: \n");
  scanf("%d", &num1);
  printf("Please enter the second integer: \n");
  scanf("%d", &num2);
  num1 = (num1 < 0) ? -num1 : num1;
  num2 = (num1 < 0) ? -num2 : num2;
  printf("The LCM of %d and %d is %d \n", num1, num2, lcm(num1, num2));
  return 0;
}

int gcd(int a, int b){
  while(b != 0){
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int lcm(int a, int b){
  return (a*b < 0) ? -(a*b) : a*b / gcd(a, b);
}
