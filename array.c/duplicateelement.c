#include<stdio.h>
int main(){
    int arr[7]={1,5,1,3,6,5,8};
        for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element",arr[i]);
                break;
            }
        }
    }
    return 0;
}