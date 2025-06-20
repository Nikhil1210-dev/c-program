// #include<stdio.h>
// int sum(int a,int b);
// int main(){
//     int a,b;
//     printf("enter the first no:");
//     scanf("%d",&a);
//      printf("enter the second no:");
//     scanf("%d",&b);
//     int s=sum(a,b);
//     printf("sum is :%d  \n",s);
//     return 0;
// }
// int sum(int x,int y){
//     return x+y;
// }


#include <stdio.h>
int sum(int a, int b );
int main(){
    int a,b ;

    printf("enter the first no:");
    scanf("%d",&a);
    printf("enter the 2nd number:");
    scanf("%d",&b);
    int  s=sum(a,b);
    printf("sum is :%d\n",s);
    return 0;
}
int sum (int x, int y){
return x+y;
}