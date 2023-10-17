#include<stdio.h>
#include<string.h>

int count(char *n){
    int len = strlen(n);
    int co=0;
    for (int j=0;j<len;j++){
        if(n[j]=='a'||n[j]=='e'||n[j]=='i'||n[j]=='o'||n[j]=='o'){
            n[j]="\0";
        }
        else continue;
    }
    return co;
}
int main(){
    char n[10];
    scanf("%s",n);
    int c = count(n);
    printf("%d\n",c);
}