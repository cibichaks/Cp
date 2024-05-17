#include<stdio.h>
/*int main(){
    int *p;
    p=(int*)malloc(2*sizeof(int));
    *p=2;
    printf("%d",*p);
    free(p);
}*/
/*int main(){
    int *p;
    p=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d",p[i]);
    }
    free(p);
}*/
int main(){
    int n,a;
    scanf("%d",&n);
    for (int i=1;i<=(n/2);i++){
         if(n%i==0){
            a=a+i;
        }
    }
    if(a==n){
        printf("%dperfect numbe",a);
    }
    else{
        printf("not %d a prime number",a);
    }
}