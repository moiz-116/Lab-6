#include<stdio.h>
int main(){
    int marks=0,valid;
    do{
        valid=0;
        printf("Enter Marks 0-100 :");
        scanf("%d",&marks);
        if(marks>100||marks<0){
            valid=1;
            printf("Re-enter,marks are invalid\n");
        }
    }while(valid);
    if(marks>=50){
        printf("Student is passed\n");
    }else{
        printf("Student is failed\n");
    }
}