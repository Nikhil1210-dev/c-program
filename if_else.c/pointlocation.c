#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates:");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("the point is origin..");
    }
    else if (x==0){
        printf("lies on y axis");
    }
    else if (y==0){
        printf("lies on x axis");
    }
    else{
        printf("the point does not lies x or y axis and it is not origin ");

    }
    return 0 ;
}