#include<stdio.h>
int main(){
  printf("hi");
  int arr[]={38,96,69,56,21,1};
  int i,j,swap;
  int size= sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<size-1;i++){
    for(j=0;j<size-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=swap;
      }
    }
  }
  printf("sorted array :");
    for(i=0;i<size-1;i++){
      printf(" %d",arr[i]);
    }
  }
