// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main(){
    int a,b,c,largest;

    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter seconf number: ");
    scanf("%d",&b);
    printf("enter third number: ");
    scanf("%d",&c);

    if (a>b && a>c){
        printf("%d is largest amoungst the three numbers",a);
    }
    else if (b>c){
        printf("%d is largest amoungst the three",b);
    }
    else{
        printf("%d is largest amoungs the three",c);
    }
    
    return 0;
}