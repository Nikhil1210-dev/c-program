#include <stdio.h>
int main(){
    int arr[6];
    for(int i=0;i<=5;i++){
        printf("enter element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i>=5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

//PS C:\c.c\array.c> cd "c:\c.c\array.c\" ; if ($?) { gcc arrayusingN.c -o arrayusingN } ; if ($?) { .\arrayusingN }
// enter element number 1
// 5
// enter element number 2
// 8
// enter element number 3
// 9
// enter element number 4
// 5
// enter element number 5
// 2
// enter element number 6
// 3
// 589523