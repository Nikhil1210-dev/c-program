#include<stdio.h>
int main(){
    int n ;
    printf("enter the number :");
    scanf("%d",&n);
    // expretion 1 ? expretion 2: expresion 3;      CONDITION
    n%2==0 ? printf("even no:") : printf("odd no");
    return 0;
}