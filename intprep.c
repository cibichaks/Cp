#include<stdio.h>
#include<stdlib.h>
 //swap 2 variables without using temp
int main(){
  int a=2,b=3;
  a=a^b;
  b=a^b;
  a=a^b;
  printf("%d %d\n",a,b);
  return 0;
}

// guessing game
/*
int main(){
  int user,i=0,random;
  printf("guess my random number between 1-100 i'll give u clues too\n");
  random= rand()%100; //need to find manually how to generate random number
  do{
    scanf("%d",&user);

    if (user==random){
    printf("congrats\a \n");
    }
    else if(user<random){
      printf("too low\n");
    }
    else
    printf("too high\n");
 }while (user != random);
return 0;
}

void primefactors(int user){
    int factor=2;
    while(user>0){
      if (user%factor==0){ // we just check that the given number divisable by 2 that are
        printf(" %d \n",factor);//if that divisable it prints the value
        user=user/factor;// it divide the value and save it to the user
      }
      else{
        factor++;//if statement is not true then it inrement to the nxt vale that can be divisable
      }
    }
}
int main (){
  int user;
  scanf(" %d""\n",&user);
  printf("for the given number %d prime factors are : \n", user);
  primefactors(user);
  return 0;
}
*/
///leap year
/*
int main(){
  int year;
  printf("enter the year :");
  scanf("%d",&year);
  if((year%100!=0 && year%4==0 ) || (year%400==0)){
    printf("given year is a leap year");
  }
  else
  printf("not a leap year");
}
*/
//2nd program excercise from logic first tamil
/*

void main(){
  int number,temp,value;
  printf("enter your number :");
  scanf("%d",&number);
 /*
 // for summ of digit of numbers  
 do
  { 
  temp=number%10; //concept to seperate last digit
  value=value+temp; // add that digit to output value
  number=number/10; //store the remaing value from seperated number
  } while (number != 0);
printf("sum of integer = %d\n",value);
*/
/*
//reversed number
do
  { 
  temp=number%10;
  value=value*10+temp; // to add the digits to a number 
  number=number/10;
  } while (number != 0);
  printf ("reversed number  :%d\n",value);
}
*/
// factors of a number
/*
int main(){
  int number;
  printf("enter a number :");
  scanf("%d",&number);
  int value=number;
  for (int i=1;i<(number/2)+1;i++){
    if(number%i==0){
      value+=i;
    }
  }
  printf("sum of factors of %d is %d",number,value);
}
*/
//program for perfect number 
/*the given number and sum of factors of a given number are same the the given 
number is a perfect number! , but u do not include the number as a one of the 
factor of a number*/
/*
void main(){
  int number,value;
  printf("enter a number :");
  scanf("%d",&number);
  for (int i=1;i<(number/2)+1;i++){
    if(number%i==0){
      value+=i;
    }
  }
  if (number==value){
    printf("\nthe given number %d is a perfect number\n",number);
  }
  else
  printf("not a perfect number\n");

}
*/
// program to find the strong number
/*
int factorial(int a){
  if(a==1 || a==0)
    return 1;            //factorial using recursion
  else
    return a*factorial(a-1);
}
void main(){
  int temp,number,ov,value=1;
  printf("enter a number :");
  scanf("%d",&ov);
  number=ov;
  while (number!=0){
    temp=number%10;
    value=value+factorial(temp);
    number=number/10;
  }
  if (value==ov){
    printf("the number %d in a strong number",ov);
  }
  else
  printf("the number %d not a strong number",ov);
}
*/
//fibonnachi series
/* 
void main(){
  int number,first=0,second=1,temp=0;
  printf("enter a number :");
  scanf("%d",&number);
  for (int i=0;i<=number;i++){
    printf("%d ",first);
    temp=first+second;

    first=second;

    second=temp;

  }
}
*/
///program for LCM
/*
void main(){
  int a,b,multiply;
  printf("enter two numbers :");
  scanf("%d%d",&a,&b);
  multiply = a<b ? b : a;
  int mul=multiply;
  while(1){
    if(multiply%a==0 && multiply%b==0){
      break;
    }
    multiply=multiply+mul;
  }
  printf("%d",multiply);
}
*/
// GCD of two numbers
