


// #include <stdio.h> 
// int main(){
//     int arr[8]={2,3,5,4,6,5,448,87};
//     printf(" no is :%d",arr[6]);
//     return 0;
// }


#include <stdio.h>

int main() {
    int arr[8] = {2, 3, 5, 4, 6, 5, 448, 87};
    int index;

    printf("Enter index: ");
    scanf("%d", &index);

    if (index >= 0 && index < 8) {
        printf("No in index %d is: %d\n", index, arr[index]);
    } else {
        printf("invalid index\n");
    }
    return 0;
}
