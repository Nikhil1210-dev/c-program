// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y)
//         continue;
//         else
//         printf(" \n %d%d",x,y);

//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int x=4,y=0,z;
    while(x>=0){
        if(x==y)
       break;
        else
        printf(" \n %d%d",x,y);
         x--;
        y++;

    }
    return 0;
}