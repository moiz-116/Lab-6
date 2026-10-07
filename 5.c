#include<stdio.h>
int main(){
    int hours,level;
    printf("Enter the water tank level :");
    scanf("%d",&level);

    printf("Hour 0: %d litres\n",level);
    while(level!=1){
        if(level%2==0){
            level=level/2;
        }else if(level%2!=0){
            level=3*level+1;
        }
        hours++;
        printf("Hour %d : %d litres\n",hours,level);
    }
    printf("Total Hours Taken :%d\n",hours);

}