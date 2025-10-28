// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){
    int r=3;
    float area,circumference;

    area= 3.14*r*r;
    circumference= 2*3.14*r;

    printf("area of circle: %f\n",area);
    printf("circumference of circle: %f\n",circumference);

    return 0;
}
