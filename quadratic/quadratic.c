#include <stdio.h>
#include <math.h>

void quadratic(double a, double b, double c);

int main(){
  double a, b, c;
  printf("Please enter the a coefficient: \n");
  scanf("%lf", &a);
  printf("Please enter the b coefficient: \n");
  scanf("%lf", &b);
  printf("Please enter the c coefficient: \n");
  scanf("%lf", &c);

  quadratic(a, b, c);

  return 0;
}

void quadratic(double a, double b, double c){

  if(a == 0.0){
    if(b == 0.0){
      printf("Not an equation! \n");
    }else{
      double x = -c / b;
      printf("Linear equation root: x = %.6f\n", x);
    }
    return;
  }

  double discriminant = b*b - (4 * a * c);
  double two_a = 2.0 * a;

  if(discriminant > 0.0){
    double sqrt_d = sqrt(discriminant);
    double x1 = (-b + sqrt_d) / two_a;
    double x2 = (-b - sqrt_d) / two_a;
    printf("Two distinct real roots: \n");
    printf("x1 = %.6f\n", x1);
    printf("x2 = %.6f\n", x2);
  }else if(discriminant == 0.0){
    double x = -b / two_a;
    printf("One real root (double): x = %.6f\n", x);
  }else{
    double realPart = -b / two_a;
    double imagPart = sqrt(-discriminant) / two_a;
    printf("Two complex roots: \n");
    printf("x1 = %.6f + %.6fi\n", realPart, imagPart);
    printf("x2 = %.6f + %.6fi\n", realPart, imagPart);
  }
}
