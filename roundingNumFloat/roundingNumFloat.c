#include <stdio.h>
#include <math.h>

float roundToInteger(float num);
float roundToTenths(float num);
float roundToHundreths(float num);
float roundToThousands(float num);

int main(){
  float num;
  while(1){
    printf("Please enter a floating point number: (to quit enter 0) \n");
    if(scanf("%f", &num) != 1){
      printf("Wrong input! \n");
      break;
    }

    if(num == 0){
      break;
    }

    printf("%f\t%f\t%f\t%f\t%f\n", num, roundToInteger(num), roundToTenths(num), roundToHundreths(num), roundToThousands(num));

  }
  return 0;
}

float roundToInteger(float num){
  return floor(num + .5);  
}

float roundToTenths(float num){
  return floor(num * 10 + .5) / 10;
}

float roundToHundreths(float num){
  return floor(num * 100 + .5) / 100;
}

float roundToThousands(float num){
  return floor(num * 1000 + .5) / 1000;
}
