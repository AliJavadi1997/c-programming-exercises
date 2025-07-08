#include <stdio.h>

int findMax(int a, int b, int c, int d);

int main(){
  int a, b, c, d;
  printf("Please enter the first integer: \n");
  scanf("%d", &a);
  printf("Please enter the second integer: \n");
  scanf("%d", &b);
  printf("Please enter the third integer: \n");
  scanf("%d", &c);
  printf("Please enter the fourth integer: \n");
  scanf("%d", &d);
  printf("The Maximum is %d \n", findMax(a, b, c, d));
  return 0;
}

int findMax(int a, int b, int c, int d){
  if(a > b && a > c && a > d){
    return a;
  }else if(b > a && b > c && b > d){
    return b;
  }else if(c > a && c > b && c > d){
    return c;
  }else{
    return d;
  }
}
