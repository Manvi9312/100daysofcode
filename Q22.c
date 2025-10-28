// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){
    float cp, sp, profit, loss;
    printf("enter cost price: ");
    scanf("%f",&cp);

    printf("enter selling price: ");
    scanf("%f",&sp);

    profit= ((sp-cp)*100)/cp;
    loss= ((cp-sp)*100)/cp;
     
    if(sp>cp){
        printf("Profit %f%%", profit);
    }

    else if(cp>sp){
        printf("Loss %f%%", loss);
    }

    else if(cp==sp){
        printf("No Profit No Loss");
    }
    return 0;
}