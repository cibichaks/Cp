#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
int main(){
    struct lap
    {
        char brand[25];
        int Dsize;
        int ram;
    };
    
    struct lap cibi = {"dell",15,8};
    printf("%d",cibi.Dsize);
    
}
*/
//structure array
/*
void main(){
    struct lap
    {
        char brand[25];
        int Dsize;
        int ram;
    };
    struct  lap fra[5];
   strcpy( fra[0].brand,"dell");
    fra[0].Dsize=15;
    strcpy(fra[1].brand,"hp");
    fra[1].Dsize=14;
    fra[1].ram=4;

    printf("%s",fra[0].brand);
    
}
*/
/*
int main(){
    struct lap
    {
        char brand[25];
        int Dsize;
        int ram;
    };
    struct lap cibi = {"dell",15,8};
    struct lap *p;
    p=&cibi;
    printf("%s",p->brand);
}
*/
//passing structure to a funtion
/*
struct lap
    {
        char brand[25];
        int Dsize;
        int ram;
    };
void finder(struct lap);
int main (){
 struct lap cibi={"dell",15,8};
 finder(cibi);
}
void finder(struct lap cibi){
    printf("%d",cibi.Dsize);
}
*/
//passing structure pointer to a function
/*
struct lap
    {
        char brand[25];
        int Dsize;
        int ram;
    };
void ptrfun(struct lap *cib);
void main(){
    struct lap cibi={"dell",15,8};
    struct lap *p;
    p=&cibi;
    ptrfun(p);
}
void ptrfun(struct lap *cib){
    printf("%d",cib->ram);
}
*/
///////typedef excercise 
typedef struct {
    char brand[25];
    int Dsize;
    int ram;
}laptop;

void typeex(laptop *det);
int main(){
    laptop chaks={"dell",15,8};
    struct laptop *p;
    p=&chaks;
    typeex(p);
}
void typeex(laptop *det){
    if (det->Dsize == det->ram){
        printf ("dummy bhava");
    }
    else
    printf("massehh");
}