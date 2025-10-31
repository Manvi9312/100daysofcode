//Q39: Write a program to find the product of odd digits of a number.

#include<stdio.h>
int main(){
    int num,digit,prod=1;
    printf("enter a number: ");
    scanf("%d",&num);

    while(num>0){
        digit=num%10;
        if(digit %2 ==1){
            prod=prod*digit;
        }
        num=num/10;
    }
    printf("product of odd digits: %d", prod);
    return 0;
}