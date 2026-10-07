#include<stdio.h>
int main(){
    int i,stock[10],search,found=-1;
    printf("Enter stock counts for 10 shelves\n");
    for(i=0;i<=9;i++){
        scanf("%d",&stock[i]);
    }
    for(i=9;i>=0;i--){
        printf("Stock Count %d\n",stock[i]);
    }
    printf("Enter Stock Count to search :");
    scanf("%d",&search);
    
    for(i=0;i<=9;i++){
        if(search==stock[i]){
            found=i;
            break;
        }
    }
    if(found!=-1){
        printf("The Stock count %d is on shelf %d\n",search,found);
    }else{
        printf("The Stock Count %d does not exist\n",search);
    }
}