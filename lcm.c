#include<stdio.h>
int lcm();
int main(){
  int a,b;
  printf("enter two number for find the LCM :");
  scanf(" %d%d",&a,&b);
  printf("here is the LCM of two gven number %d \n",lcm(a,b));
}
int lcm(int a,int b){
  while(b!=0){
    int temp =b;
    b=a%b;
    a=temp;
}
return (a*b)/a;
}
