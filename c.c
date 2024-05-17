#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[2] ;
    float b[2];
    for (int i=0;i<=1;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<=1;i++){
        scanf("%f",&b[i]);
    }

        printf("%d %d\n",a[0]+a[1],a[0]-a[1]);

        printf("%f %f",b[0]+b[1],b[0]-b[1]);


    return 0;
}
