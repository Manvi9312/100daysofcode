// Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){
    int n,sum;
    printf("enter n: ");
    scanf("%d",&n);
    sum=(n*(2+(n-1)))/2;    //by using formula of sum ofn numbers of an AP

    printf("sum of %d natural numbers is:%d\n",n,sum);

    return 0;

}