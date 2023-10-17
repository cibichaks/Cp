#include<iostream>
#include<string>

using namespace std;
void vcount(char* n){
    //int count = 0;
    int len = length(n);

    for (int j=0;j<len;j++){
        if(n[j]=='a'||n[j]=='e'||n[j]=='i'||n[j]=='o'||n[j]=='o'){
            n[j]=n[j+1];
        }
        else continue;
    }
    for (int i=0;i<len;i++){
        cout<<n[i]<<'\n';
    }
}
int main(){
    char n[10];
    cin>>n;
    //int a = vcount(n);
    //cout<<a<<endl;
    vcount(n);
}