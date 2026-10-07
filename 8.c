#include<stdio.h>
int main(){
    int j,i,temp[8];
    for(i=0,j=1;i<=7,j<=8;i++,j++){
        printf("Enter Reading %d :",j);
        scanf("%d",&temp[i]);
    }
int hottest=temp[0];
int coldest=temp[0];
int secondHottest=-9999;
for(i=1;i<=7;i++){
if(temp[i]>hottest){
    secondHottest=hottest;
    hottest=temp[i];
}else if(temp[i]>secondHottest && temp[i]<hottest){
    secondHottest=temp[i];
}
if(temp[i]<coldest){
coldest=temp[i];
}
}
    printf("%d\n",hottest);
    printf("%d\n",secondHottest);
    printf("%d\n",coldest);
}