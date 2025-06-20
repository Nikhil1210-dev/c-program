// #include<stdio.h>
// int main(){
//     int marks[7]={95,97,78,84,25,3,68};
//     for(int i=0;i<=6;i++){
//         if(marks[i]<35){
//             printf("%d\n",marks[i]);}
//     }
//     return  0;

// }

//HOMEWORK
#include<stdio.h>
int main(){
    int marks[7];
    for(int i=0;i<=6;i++){
        printf("enter the element:%d\n",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=6;i++){
         if(marks[i]<35){
          printf("less than 35 is :%d\n",marks[i]);
     }
      printf("\n");
    }
    return 0;
}