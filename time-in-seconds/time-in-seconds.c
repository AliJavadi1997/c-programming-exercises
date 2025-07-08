#include <stdio.h>

int timeToSeconds(int hour, int minute, int second);

int main(){
  int hour1, min1, sec1;
  int hour2, min2, sec2;
  int time1, time2;
  printf("Please enter the first time in the format of hour/min/sec: \n");
  scanf("%d/%d/%d", &hour1, &min1, &sec1);
  printf("Please enter the second time in the format of hour/min/sec: \n");
  scanf("%d/%d/%d", &hour2, &min2, &sec2);
  time1 = timeToSeconds(hour1, min1, sec1);
  time2 = timeToSeconds(hour2, min2, sec2);
  printf("The first time in seconds is %d! \n", time1);
  printf("The second time in seconds is %d! \n", time2);
  printf("The difference between the two times is %d seconds! \n", time2 - time1);
  return 0;
}

int timeToSeconds(int hour, int minute, int second){
  if(hour == 12) hour = 0;
  return (hour * 3600) + (minute * 60) + second;
}
