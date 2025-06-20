#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 1st side of triangle:");
    scanf("%d",&a);
    printf("enter 2nd side of triangle:");
    scanf("%d",&b);
    printf("enter 3rd side of triangle:");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a  && (c+a)>b){
        printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }
    return 0;
}