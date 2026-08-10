#include<stdio.h>
int main(){
    int a,b,c;
    int result;
    printf("enter values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);

    result=(a+b!=c)>!b && c-b ||a*(b*c) ;
    if (result==1){
        printf("true");
    }else{
        printf("False");
    }

    return 0;

}
