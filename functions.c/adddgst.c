// #include <stdio.h>
// void calculatedprice(float n);
// int main (){
//     float n;
//     printf("enter price:");
//     scanf("%f",&n);
//     calculatedprice(n);
//     return 0;
// }
// void calculatedprice(float n){
//     n=n+(0.18*n);
//     printf("final price is: %f",n);

// }

#include<stdio.h>
void calculatedprice(float n );
int main(){
    float n;
    printf("enter product price:");
    scanf("%f",&n);
    calculatedprice(n);
    return 0;
}
void calculatedprice(float n ){
    n=n+(0.18*n);
    printf("final price is: %f",n);
}