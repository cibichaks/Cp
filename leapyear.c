#include<stdio.h>
int leap(int year){
  if (year%4==0 && year%100!=0 || year%400==0)
    return 1 ;
    else
    return 0 ;
}
int main(){
  int year;
  printf("enter the year :\n");
  scanf("%d", &year);
  if (leap(year))
  printf("you enterd year is leap year!\n");
  else
  printf("not a leap year\n");
}
