#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n&1==1){
        printf("given number is odd\n");       
    }
    else
       printf("given number is even\n");
}
