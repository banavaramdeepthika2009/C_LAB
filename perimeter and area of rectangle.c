
#include<stdio.h>
int main(){
    float l,b,h;
    printf("enter l,b,h of a rectangle:");
    scanf("%f%f%f",&l,&b,&h);
    printf("area of rectangle is %f",l*b*h);
    printf("perimeter of rectangle is %f",2*(l+b));
    return 0;
}
