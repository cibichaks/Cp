#include<stdio.h>
int  main(){

int i,n,number,first=0,second=1;
scanf("%d",&n);
for (i=0;i<n;i++){
  printf("%d\n",number);
  number=first+second;
  first=second;
  second=number;
}
  return 0;
}
