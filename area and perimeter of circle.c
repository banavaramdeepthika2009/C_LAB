#include<stdio.h>
#define PI 3.14
int main(){

    printf("enter radius of a circle:");
    float r;
    scanf("%f",&r);
    printf("perimeter of circle is %f",2*PI*r);
    printf("area of circle is %f",PI*r*r);
    return 0;

}
