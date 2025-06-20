#include<stdio.h> 
int main(){
    int n ;
    printf("enter a no :");
    scanf("%d",&n);
    // int a=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
            // a++;
        }
        printf("\n");
     }
    return 0;
}