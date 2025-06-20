#include<stdio.h>
int main(){
    int n ;
    printf("enter the no:");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int q=1;q<=nsp;q++){
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}