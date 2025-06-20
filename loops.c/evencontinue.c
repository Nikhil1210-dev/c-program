#include <stdio.h>
int main(){
    int n ;
    for(int i=1; i<=100;i++){
        if(i%2==1){
        continue;
        }
        printf("%d ",i);
    }
    return 0;
}