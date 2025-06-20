#include<stdio.h>
#include<math.h>
float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a, float b );
int main(){
    float a=5.0;
    float b =10.0;
    printf("area is : %f", rectanglearea(a,b));
return 0 ;
}
float squarearea(float side){
    return side*side;
}
float circlearea(float rad){
return  3.14*rad*rad;

}
float rectanglearea(float a,float b){
    return  a*b;
}


// #include<stdio.h>
// #include<math.h>
// float squarearea(float side);
// float circlearea(float rad);
// float rectanglearea(float a,float b);
// int main(){
//     float a=5.0;
//     float b =10.0;
//     printf("area is : %f",rectanglearea(a,b));
//     return 0;
// }
// float squarearea(float side){
//       return side*side;
// }
// float circlearea(float rad){
//     return 3.14*rad*rad;
// }
// float rectanglearea(float a, float b){
//     return a*b;
// }