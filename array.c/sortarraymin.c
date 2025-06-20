// #include <stdio.h>
// int main() {
//     int arr[100], n, temp;
//     printf("Enter number of elements in the array: ");
//     scanf("%d", &n);
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     // Bubble Sort to sort the array in ascending order
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     printf("\nSorted array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     // Smallest element is now the first element
//     printf("\nSmallest element is: %d\n", arr[0]);
//     return 0;
// }
#include<stdio.h>
int main (){
    int arr [50],n,temp;
    printf("enter no of elements in array: ");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++){
        for (int j =0;j<n-i-1;j++){
            if(arr [j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n SOOrted array:");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nsmallest element is:%d\n",arr[0]);
    return 0;
}