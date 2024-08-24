#include<stdio.h>

static void file_1(){
    int num;
    num++;
    printf("printing from staic function using fun2 %d\n",num);
}

void func_2(){
    file_1();
}/*
int main(){
  while(1){
    func_2();
    sleep(1);
  }   
}
*/
