#include<stdio.h>
int main(){
    int pin,sum,digit,reversed;
    printf("Enter a  4-to-6 digit PIN :");
    scanf("%d",&pin);
    while(pin>0){
        digit=pin%10;
        sum+=digit;
        reversed=reversed*10+digit;
        pin=pin/10;
    }
    printf("Sum of digits is :%d\n",sum);
    printf("Reversed PIN is %d\n",reversed);
}