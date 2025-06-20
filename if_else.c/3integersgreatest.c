// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter the numbers:");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b && a>c){
//         printf("a is greatest");
//     }
//     if(b>a && b>c){
//         printf("b is the greatest");
//     }
//     else{
//         printf("c is the greatest");
//     }
//     return 0;
// }
//prettier extension download

// #include <stdio.h>
// int main()
// {
//     int a,b,c,d;
//     printf("enter the numbers:");
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     if(a>b && a>c && a>d){
//         printf("a is greatest");
//     }
//     if(b>a && b>c && b>d){
//         printf("b is the greatest");
//     }
//     if(c>a && c>b && c>d){
//         printf("c is the greatest");
//     }
//     else{
//         printf("d is the greatest");
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a,b,c,d ;
    printf("enter the no :");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("a is greatest");
    }
    else if(b>a && b>c && b>d){ 
        printf("b is the gretest");
    }
    else if (c>a && c>b  && c>d){
        printf("c is gretest");
    }
    else if (d>a && d>b && d>c) {
        printf("d is the greatest");
    }
return 0;
}