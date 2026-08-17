#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%6==0){
        printf("%d is divisible by 6",num);
    }
    else{
        int rem=num%6;
        num= num+(6-rem);
        printf("%d is divisible by 6",num);
        int sum=0,count=0;
        for(int i=num;count<=5;i+=6){
                sum+=i;
                count++;

        }
        printf("sum of next 5 numbers divisible by 6 is %d",sum);

    }
    return 0;



}
