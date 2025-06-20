// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     if(n%5==0 && n%3==0){
//        printf("this number is divisible by both");
//     }
//     else if(n%5==0){
//         printf("the  number is divisible by 5");
//     }
//     else if(n%3==0){
//         printf("the number is divisible by 3 ");
//     }
//     else{
//         printf("the number is not divisible by 5 and 3");

//     }
//     return 0;
// }


#include <stdio.h>
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    if (n%7==0 && n%8==0){
        printf("both number are divisible by 7 and 8");

    }
    else if (n%7==0){
        printf("the number is divisible by 7");

    }
    else if(n%8==0){
        printf("the number is divisible by 8");
    }
    else{
        printf("the number is not divisible by 7 and 8 ");
    }
    return 0;
}