#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
    printf("%d",arr[i]);}
return 0;
}


/*
enter the size of array:4
3
5
2
9
3529
*/