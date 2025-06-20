#include <stdio.h>
int main()
{
    int a,b,c;
    printf("ram age:");
    scanf("%d",&a);
    printf("shyam age:");
    scanf("%d",&b);
    printf("ajay age:");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("ram is youngest");
    }
    if(b<a && b<c){
        printf("shyam is youngest");
    }
    else{
        printf("ajay is youngest");
    }
    return 0;
}