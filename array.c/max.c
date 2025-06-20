// //find the maximum value off the element in the array...
// #include<stdio.h>
// int main(){
//  int arr [7]={7,8,5,6,4,1,959};
//  int max=-1;
//  for (int i=0;i<=6;i++){
//     if (max<arr[i]){
//         max = arr [i];
//     }
//  }
//  printf("%d ",max);
//  return 0;
// }



//find the maximum value off the element in the array...
#include<stdio.h>
#include<limits.h>
int main(){
 int arr [7]={7,8,54445,6,4,1,959};
 int max=INT_MIN;
 for (int i=0;i<=6;i++){
    if (max<arr[i]){
        max = arr [i];
    }
 }
 printf("MIXIMUM VALUE OFF ARRAAY IS :%d ",max);
 return 0;
}