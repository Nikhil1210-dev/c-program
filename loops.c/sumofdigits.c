// #include<stdio.h> 
// int main(){
//     int n;
//     printf("enter n no:");
//     scanf("%d",&n);
//     int sum =0;
//     int lastdigit=0;
//     while(n!=0){
//         lastdigit=n%10;
//         sum=sum+lastdigit;
//         n=n/10;
//     }
//     printf("the no of digits are %d",sum);
//     return 0;
// }



#include<stdio.h> 
int main(){
    int n;
    printf("enter n no:");
    scanf("%d",&n);
    int sum =0;
    int lastdigit=0;
    while(n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("the no of digits are %d",sum);
    return 0;
}

