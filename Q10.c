// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
    int sec,min,hr,seconds;
    
    printf("enter time in seconds: ");
    scanf("%d",&seconds);
    
    min=(seconds%3600)/60;
    hr=seconds/3600;
    sec=seconds%60;
    
    printf("%d : %d : %d",hr,min,sec);
    
    return 0;
}