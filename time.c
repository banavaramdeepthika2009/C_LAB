#include<stdio.h>
int main(){
    int min;
    printf("enter the time in minutes");
    scanf("%d",&min);
    int hours,minutes;
    hours=min/60;
    minutes=min%60;
    printf("total time is %d : %d",hours,minutes);
    return 0;

}
