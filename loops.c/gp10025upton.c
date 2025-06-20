// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("enter the number:");
//     scanf("%d",&n);
//     int a=100;
//     for(int i=1 ;a%2;i++){
//         printf("%d ",a);
//         a=a%2;
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n,i;
    printf("enter no:");
    scanf("%d",&n);
    float a=100;
    for(i=1;i<=n;i++){
        printf("%d",a);
      a=a/2;
    }
    return 0;
}