#include<stdio.h>
int main(){
    int score,n,i,total,avg;
    printf("Enter number of students :");
    scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("Enter test score of Student out of 100\n");
    scanf("%d",&score);
    total+=score;
}
avg=total/n;
printf("Total Score %d\n",total);
printf("Avg Score %d",avg);
}