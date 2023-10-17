#include<stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
  int a=6,b=8;
  printf("%d",gcd(a,b));
}
