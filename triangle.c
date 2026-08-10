#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter length of sides of a triangle:");
    scanf("%d%d%d",&a,&b,&c);
    (a==b && b==c) ?
    printf("it is a equilateral triangle") : ((a*a +b*b ==c*c)||(b*b +c*c ==a*a)||(a*a+c*c==b*b)) ?
     printf("it is a right angle triangle") : ((a==b)||(b==c))?
      printf("it is a isosceles triangle") : (a!=b!=c)?
      printf("it is a scalene triangle"): printf("it is a triangle");
    return 0;

    }
