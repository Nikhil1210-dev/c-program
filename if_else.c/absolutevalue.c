#include <stdio.h>
int main()
{
    int n ;
    printf("Enter a no:");
    scanf("%d",&n);
if(n<0){
    n=n*(-1);
}
printf("The Value is  Absolute:%d",n);
return 0;
}