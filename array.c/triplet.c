#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int totaltriplet=0;
    int x=10;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(arr[i]+arr[j]+arr[k] ==x){
                    printf("%d%d%d \n",arr[i],arr[j],arr[k]);
                    totaltriplet++;
                }
            }
        }
    }
    printf("%d",totaltriplet);
    return 0;
}



//9890