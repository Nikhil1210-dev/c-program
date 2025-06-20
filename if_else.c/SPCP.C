#include<stdio.h>
int main()
{ 
    int cp ;
    printf("Enter cost price:");
    scanf("%d",&cp);
    int sp;
    printf("Enter Selling Price:");
    scanf("%d",&sp);
    if(cp<sp){
        printf("profit");
    }
    if(sp<cp){
        printf("loss");
    }
    if (cp==sp){
        printf("No Profit No loss");
    }
    return 0;
}