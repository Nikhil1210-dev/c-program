// #include<stdio.h>
// #include <limits.h>
// int main(){
//     int arr[8]={1,2,5,3,4,6,77,9};
//     // int max=INT_MIN;
//     for(int i=0;i<8;i++){
// if(arr [i]> max){
//     max=arr[i];}}
// printf("maximum element in the array is:%d\n",max);
// 
// return 0;
// }

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[8] = {1, 2, 5, 3, 4, 6, 77, 9};
    int max = INT_MIN; 

    for (int i = 0; i < 8; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }

    printf("Maximum element in the array is: %d\n", max);
    return 0;
}
