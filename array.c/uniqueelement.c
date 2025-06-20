#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={6,2,4,7,4,6,2};
    for(int i=0;i<=6;i++){
        bool flag=false;
    for(int j=0;j<=6;j++){
        if(i!=j && arr[i]==arr[j]){
            flag=true;
            break;
        }
    }
    if(!flag){
    printf("%d\n",arr[i]);
    break;
}
    }
return 0;
}