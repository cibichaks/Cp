#include <stdio.h>
#include <stdlib.h>
///programing excercize given by the GPT(1)
//allocate and free memory
/*
void main(){
    int *p;
    p=(int*)malloc(1*sizeof(int));
    *p=56;
    printf("\n%d",*p);
    free (p);
    printf("\n%d\n",*p);
}
*/
//dynamic array GPT (2)
/*
void main(){
    int *p,n=0;
    printf("\nenter the size of an array\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("\nenter the element for the position %d :",i);
        scanf("%d",&p[i]);
    }
    printf("your elemnts are :");
    for (int i=0;i<n;i++){
        printf(" %d",p[i]);
    }
}
*/
/*
void main(){
    char *p;
    int n,i,a;
    printf("enter the number of letter contain the string that u gonna give \n");
    scanf("%d",&n);
    getchar();
    p=(char*)malloc(n*sizeof(char));
    for (i=0;i<=n;i++){
        printf("hi\n");
        printf(" %d------->\n",i+1);
        p[i]=getchar();
    }  
    printf("%s",p);
}
*/

/*
int main() {
    char *p;
    int n, i, a;
    printf("Enter the number of letters the string will contain:\n");
    scanf("%d", &n);

    // Consume the newline character left in the input buffer
    getchar();

    p = (char *)malloc(n * sizeof(char));
    if (p == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter character %d: ", i + 1);
        p[i] = getchar();
    }

    p[n] = '\0'; // Null-terminate the string

    printf("You entered the string: %s\n", p);

    // Don't forget to free the allocated memory
    free(p);

    return 0;
}
*/
/*void main(){
    int n;
    scanf("%d",&n);
    char p[n];
    fgets(p  ,sizeof(p), stdin);
    //p=(char*)malloc(n*sizeof(char));
    printf("\ngive your input :\n");
    printf("%s",p);
}
*/
