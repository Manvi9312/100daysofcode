// Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>
int main(){
    int num,prod=1;
    printf("enter number: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        prod=prod*i;
    }
    printf("%d",prod);
    return 0;
}