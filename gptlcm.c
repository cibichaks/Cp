#include <stdio.h>

int lcm();
int main() {
    int a, b;
    printf("Enter two numbers to find the LCM: ");
    scanf("%d %d", &a, &b);
    printf("Here is the LCM of the two given numbers: %d\n", lcm(a, b));
    return 0;
}

int lcm(int a, int b) {
  int A = a,B = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return ( A * B ) / a;
}
