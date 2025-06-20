// #include<stdio.h>
// #include<string.h>
// void getname(char name[]){
//     printf("enter your name:");
//     fgets(name,100,stdin);
//     size_t len=strlen(name);
//     if(len>0 && name[len-1]=='\n'){
//     name[len-1]='\0';
// }  
// }
// void putname(char name[]){
//     int count=strlen(name);
//     printf("the no of character in your name is: %d\n",count);
// }
// int main(){
//     char name[100];
//     getname(name);
//     putname(name);
//     return 0;
// }



#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isarmstrong(int n){
    int count=0;
    int x=n;
    while(x>0){
        int digit=x%10;
        count++;
        x=x/10;
    }
    x=n;
    int Ans=0;while(x>0){
        int ans =x%10;
        Ans +=(int)(pow(ans,count)+ 0.5);
        x=x/10;
    }
    if(Ans==n){
        return true;
    }
    else{
        return false;
    }
}
int main (){
    int n=153;
    printf("%d",isarmstrong(n));
}

