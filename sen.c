#include<stdio.h>
int main(){
  char sen[100];
  fgets(sen,sizeof(sen),stdin);
  printf("%s\n",sen);
}
