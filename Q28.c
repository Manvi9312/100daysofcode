// Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main(){
    int n;
    printf("enter value of n: ");
    scanf("%d",&n);

    int prod=1;

    for (int i=2; i<=n; i+=2){
        prod=prod*i;
    }
    printf("product of even numbers from 1 to %d= %d\n",n,prod);
    return 0;
}