#include<stdio.h>
int main(){
    int arr [10];
    for (int i=0;i<=9;i++){
        printf("enter element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[5]);
    return 0;
}