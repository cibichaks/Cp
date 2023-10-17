/*#include <stdio.h>
#include <string.h>
int  main(){
    char n[10];
    int len=strlen(n) ;
    scanf("%s",n);
    for ( int j=0;j<len;j++){
        if (n[j] == 'a' || n[j]=='e' ||n[j]== 'i' ||n[j]== 'o' || n[j]=='u' ){
            n[j]='u';
        }        
    }
    printf("after words %s\n",n);
}
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char ch) {
    ch = tolower(ch); // Convert the character to lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char *str) {
    int len = strlen(str);
    int index = 0;
    
    for (int i = 0; i < len; i++) {
        if (!isVowel(str[i])) {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    removeVowels(input);
    
    printf("String after removing vowels: %s\n", input);
    
    return 0;
}
