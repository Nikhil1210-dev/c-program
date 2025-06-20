// //find the maximum value off the element in the array...
// #include<stdio.h>
// int main(){
//  int arr [7]={7,8,5,6,4,1,959};
//  int max=0;
//  for (int i=0;i<=6;i++){
//     if (min>arr[i]){
//         min = arr [i];
//     }
//  }
//  printf("MAXIMUM VALUE OFF ARRAAY IS :%d ",min);
//  return 0;
// }



// //find the manimum value off the element in the array...
// #include<stdio.h>
// #include<limits.h>
// int main(){
//  int arr [7]={7,8,54445,6,4,1,959};
//  int min=INT_MAX;
//  for (int i=0;i<=6;i++){
//     if (min>arr[i]){
//         min = arr [i];
//     }
//  }
//  printf("MINIMUM VALUE OFF ARRAAY IS :%d ",min);
//  return 0;
// }


// #include<stdio.h>
// #include<limits.h>
// int main (){
//     int arr [7]={1,8,56,4,548,565,69};
//     int min =INT_MAX;
//     for(int i=0;i<=6;i++){
//         if(min>arr[i]){
//             (min=arr[i]);
//         }
//     }
//     printf("MINIMUM VALUES OFF ARRY IS :%d ",min);
//     return 0;
// }

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={45,85,96,7,87};
    int max=INT_MIN;
    for(int i =0;i<=6;i++){
        if(max<arr[i]){
            (max=arr[i]);
        }
    }
    printf("MAXIMUM VALUE OF ARRAY IS: %d",max);
    return 0;
}