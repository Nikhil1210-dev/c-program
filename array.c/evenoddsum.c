#include <stdio.h>
int main(){
int arr[7]={3,2,1,6,5,4,9};
int sumeven=0;
int sumodd=0;
for(int i=0;i<=6;i++){
    if(i%2==0){
           sumeven+=arr[i];
        }
        else{
            sumodd+=arr[i];
        }
    }
    int res=sumeven-sumodd;
    printf("%d",res);
    return 0;  
}
