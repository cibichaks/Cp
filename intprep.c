#include<stdio.h>
#include<stdlib.h>
/* swap 2 variables without using temp
int main(){
  int a=2,b=3;
  a=a+b;
  b=a-b;
  a=a-b;
  printf("%d %d",a,b\n);
  return 0;
}
*/
// guessing game
/*
int main(){
  int user,i=0,random;
  printf("guess my random number between 1-100 i'll give u clues too\n");
  random= rand()%100; //need to find manually how to generate random number
  do{
    scanf("%d",&user);

    if (user==random){
    printf("congrats\a \n");
    }
    else if(user<random){
      printf("too low\n");
    }
    else
    printf("too high\n");
 }while (user != random);
return 0;
}
*/
void primefactors(int user){
    int factor=2;
    while(user>0){
      if (user%factor==0){ // we just check that the given number divisable by 2 that are
        printf(" %d \n",factor);//if that divisable it prints the value
        user=user/factor;// it divide the value and save it to the user
      }
      else{
        factor++;//if statement is not true then it inrement to the nxt vale that can be divisable
      }
    }
}
int main (){
  int user;
  scanf(" %d""\n",&user);
  printf("for the given number %d prime factors are : \n", user);
  primefactors(user);
  return 0;
}
