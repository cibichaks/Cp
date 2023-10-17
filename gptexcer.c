#include<stdio.h>
//first Gpt problem _____ sum of n numbers
/*
int main (){
  int i,a,b;
  scanf("%d",&a);
  for (i=0;i<a;i++){
    b=b+i;
  }
  printf("%d\n",b);
}
*/
//2nd Gpt program__________Factorial calculation
/*
int main (){
  int i,n,b=1;
  scanf("%d",&n);
  for (i=1;i<=n;i++){
    b=b*i;
  }
  printf("factorial of a given number in :%d\n",b);
}
*/
//Gpt 3rd problem_______________fibonachi series
/*
int main(){
  int i,first=0,number=0,second=1,n;
  scanf("%d",&n);
  for (i=0;i<=n;i++){
    printf("%d\n",number);
    number=first+second;
    first=second;
    second=number;
  }
}
*/
//  find the prime numbers
//given is cib's solution

int main(){
  int i,a;
  scanf("%d",&a);
  if (a<=1){
    printf("paithiyakara madhu +ve la input kudu");
  }
  for (i=2;i<=a/2;i++){
      if (a%i==0 && i==a){
        printf("given number %d is a prime number\n",a);
      }
      else if (a%i==0 && i!=a){
        printf("given number is not a prime number\n");
      }
  }
}
