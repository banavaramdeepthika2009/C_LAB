#include<stdio.h>
int main(){
    char i;
    printf("enter a alphabet:");
    scanf("%c",&i);
    (i>='A' && i<='Z') ? printf("%c  IS A UPPERCASE ALPHABET",i) : printf("%c is a lower case alphabet",i);
    return 0;
}
