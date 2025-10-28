// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    
    l=20;
    b=10;
    
    area=l*b;
    perimeter=2*(l+b);

    printf("perimeterof rectangle: %d\n",perimeter);
    printf("area of rectangle: %d\n",area);

    return 0;
}