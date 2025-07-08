#include <stdio.h>
#include <math.h>

#define PI 3.141592

double calcArea(double a, double b, double c);

int main(){
  double a, b, c;
  printf("Please enter the length of side 'a': \n");
  scanf("%lf", &a);
  printf("Please enter the length of side 'b': \n");
  scanf("%lf", &b);
  printf("Please enter the length of side 'c': \n");
  scanf("%lf", &c);
  printf("The triangle with sides %lf, %lf and %lf has the area of %lf \n", a, b, c, calcArea(a, b, c));
}

double calcArea(double a, double b, double c){
  double semiPerimeter = (a + b + c) / 2;
  return sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
}
