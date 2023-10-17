#include<stdio.h>

int mul(int a,int b);

int main (){
  int A=0,B=0,m=0;
printf("enter two numbers :");
scanf("%d %d", &A ,&B);
m=mul(A,B);
printf("multiplied num is : %d",m);
}
int mul (int a, int b){
  int c=0;
  c=a*b;
  return c;
}
