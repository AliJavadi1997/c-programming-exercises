#include <stdio.h>

int isPerfect(int num);

int main(){
  for(int i = 1; i < 1000; i++){
    if(isPerfect(i)){
      printf("%d\t", i);
    }
  }
  return 0;
}

int isPerfect(int num){
  int tmp = 0;
  for(int i = 1; i < num; i++){
    num % i == 0 ? tmp += i : tmp;
  }
  if(num == tmp){
    return 1;
  }else{
    return 0;
  }
}
