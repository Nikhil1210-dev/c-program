#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a=100;
    for(int i=1 ; i<=n;i++){
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n ;
//     printf("enter a no:");
//     scanf("%d",&n);
//     for (int i=0;i<=n;i++){
//         printf("nikhil \n");
//     }
//     return 0;

// }