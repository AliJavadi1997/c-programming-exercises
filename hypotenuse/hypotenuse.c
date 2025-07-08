#include <stdio.h>
#include <math.h>

double hypotenuse(double a, double b);

int main(){
  double a, b;
  printf("Please enter the length of side 'a': \n");
  scanf("%lf", &a);
  printf("Please enter the length of side 'b': \n");
  scanf("%lf", &b);
  printf("The hypotenuse is %lf \n", hypotenuse(a, b));
  return 0;
}

double hypotenuse(double a, double b){
  return sqrt(a*a + b*b);
}
