#include<stdio.h>
int main(){
      int arr[8]={1,2,3,4,5,9,7,8};
      int x=4;
      for(int i=0;i<=7;i++){      
       if(arr[i]==x){
        printf("%d is present in array and index is %d.",x,i);
        break;
    }
  }
}