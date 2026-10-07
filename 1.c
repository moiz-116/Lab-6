#include<stdio.h>
int main(){
    int i,price=500;
    printf("-------Show Schedule-----\n");
    printf("show 1 = Rs. %d\n",price);
    for(i=2;i<=10;i++){
        price+=50;
        printf("show %d = Rs. %d\n",i,price);
    }
}