#include<stdio.h>
int main(){
    int checkout=1,total,choice;
    do{
      printf("--------Menu--------\n");
      printf("Enter 1 for Add Item\n");
      printf("Enter 2 for Remove Item\n");
      printf("Enter 3 for View Total\n");
      printf("Enter 4 for Checkout\n");
      printf("Each Item=10\n");
      printf("Enter Your Choice :");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:
        printf("\nItem added");
        total+=10;
        break;
      case 2:
        printf("\nItem Removed");
        total-=10;
        break;
      case 3:
        printf("\nTotal :%d",total);
        break;
      case 4:
        printf("\nYour total at checkout is %d",total);
        checkout=0; 
        break;
      default:
        printf("\nInvalid Choice");
        break;
      }
    }while(checkout);
}