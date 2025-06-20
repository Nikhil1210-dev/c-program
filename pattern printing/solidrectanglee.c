#include <stdio.h>
int main()
{
int n ;
printf("Enter no of rows;");
scanf("%d",&n);
for(int i=1;i<=3;i++){
    for(int i=1;i<=n;i++){
    printf("* ");
}
    printf("\n");
}
    return 0;
}