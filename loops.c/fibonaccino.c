// #include<stdio.h>
// int main(){
// int n;
// printf("enter a number :");
// scanf("%d",&n);
// int a=1, b=1 , sum =1;
// for(int i=1;i<=n-2;i++){
//     sum = a+b;
//     a=b;
//     b=sum;
// }
// printf("The %dth fibonacci is %d",n,sum);
//     return 0;
// }


#include <stdio.h>
int main(){
    int n ;
    printf("enter the no:");
    scanf("%d",&n);
    int a=1, b=1 , sum=1;
    for (int i=1;i<=n-2;i++){
        sum =a+b;
        a=b;
        b=sum;
    }
printf("the %dth fibbonacci is %d",n,sum);
return 0;
}