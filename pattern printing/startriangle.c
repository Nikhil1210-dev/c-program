// #include <stdio.h>
// int main ()
// {
// int n ;
// printf("Enter no of rows;");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         printf("* ");
    
//     }
//     printf("\n");
// }
// return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a no of rows:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("enter a no of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        // for(int k=1;k<=i;k++){
        //     printf("* ");
        // }
        printf("\n");
    }
    return 0;
}