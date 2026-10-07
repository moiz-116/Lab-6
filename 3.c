#include<stdio.h>
int main(){
    int i,years,principle,cInt,cAmount;
    float rate;
    printf("Enter Principle Amount :");
    scanf("%d",&principle);
    printf("Enter the rate of compound interest :");
    scanf("%f",&rate);
    printf("Enter the amount of years :");
    scanf("%d",&years);
    rate=rate/100;
    for(i=1;i<=years;i++){
        cInt=principle*rate;
        principle+=cInt;
        cAmount+=cInt;
    }
    printf("Compound Interest %d\n",cAmount);
    printf("Total Amount %d",principle);
}