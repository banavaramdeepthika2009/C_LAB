#include<stdio.h>
int main(){
    printf("enter a number:");
    int num,sum,digit;
    scanf("%d",&num);
    while (num!=0){
            digit=num%10;
            sum=sum+digit;
            num=num/10;



    }
    printf("sum of digits of %d is %d",num,sum);
    return 0;
}
