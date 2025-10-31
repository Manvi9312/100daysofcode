//Q41: Write a program to swap the first and last digit of a number.

#include<stdio.h>
int main(){
    int num, last, first,temp,count=0;
    printf("enter a number: ");
    scanf("%d",&num);
    temp=num;
    last= temp%10;

    while(temp>=10){
        temp=temp/10;
        count++;
    }
    first=temp;
    int power = 1;
    for(int i = 0; i < count; i++)
        power = power * 10;

    int middle = (num % power) / 10;  // remove first and last digits

    int swapped = last * power + middle * 10 + first;

    printf("After swapping: %d", swapped);
    return 0;
}
