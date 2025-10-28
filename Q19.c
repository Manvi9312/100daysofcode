// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 sides of the tringle a b c: ");
    scanf("%d %d %d", &a, &b, &c);
   
    if (a+b>c&& a+c>b && b+c>a){
        if (a==b && b==c){
            printf("EQILATERAL TRAINGLE");
        }

        else if(a==b || b==c || a==c){
            printf("ISOCLELES TRIANGLE");
        }

        else {
            printf("SCALAR TRAINGLE");
        }
    }    
    
    else{
        printf("INVALID TRIANGLE");
    }

    return 0;
}