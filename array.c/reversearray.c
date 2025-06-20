// #include <stdio.h>
// int main(){
//     int arr[6];
//     for(int i=0;i<=5;i++){
//         printf("enter element number %d\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=5;i>=0;i--){
//         printf("%d",arr[i]);ṇ
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[6];
//     for(int i=0;i<=5;i++){
//         printf("enter element number %d\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i=5;i>=0;i--){
//         printf("%d \n",arr[i]);
//     }
//     return 0;
// }



#include<stdio.h>
int main(){
    int arr[6];
    for(int i=0;i<=5;i++){
        printf("enter the elements number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=5;i>=0;i--){
        printf("%d \n",arr[i]);
    }
    return 0;
}
