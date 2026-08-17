#include<stdio.h>
int fact(int digit){
    int i,fact=1;
    for(i=1;i<=digit;i++){
            fact=fact*i;

    }
    return fact;
}

int main(){
    int num,sum=0,digit;
    printf("enter a number:");
    scanf("%d",&num);
    int org_num=num;
    while(num>0){
        digit=num%10;
        sum+=fact(digit);
        num=num/10;

    }
    if(sum==org_num){
        printf("%d is a strong number",org_num);

    }
    else
        printf("%d is not a strong number",org_num);

    return 0;


}
