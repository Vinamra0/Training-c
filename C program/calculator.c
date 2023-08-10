#include<stdio.h>
 int num1,num2;
void sum(){
   
printf("Please Enter Num1:");
scanf("%d",&num1);
printf("\n Please Enter Num2:");
scanf("%d",&num2);
printf("The sum is: %d \n",(num1+num2));
}

void substract(){
  printf("Please Enter Num1:");
scanf("%d",&num1);
printf("\n Please Enter Num2:");
scanf("%d",&num2);
printf("The difference is: %d \n",(num1-num2));
}

void multiply(){
printf("Please Enter Num1:");
            scanf("%d",&num1);
            printf("\n Please Enter Num2:");
            scanf("%d",&num2);
         
            printf("The product is: %d \n",   num1*num2);
}

void divide(){
printf("Please Enter Num1:");
            scanf("%d",&num1);
            printf("\n Please Enter Num2:");
            scanf("%d",&num2);
            
            printf("The division is: %d \n", num1/num2);
}
void main(){

    int choice;
    int num1,num2;

    do{ 
        printf("Please select the operation you want to perform: \n");
        printf("1.Addition \n 2.Substraction \n 3.Multiplication \n 4.Divide \n 5.Exit \n");
        printf("Please enter your choice: \n");
        scanf("%d", &choice);

        switch (choice){
            case 1:
             sum();
            break;

            case 2:
            substract();
            break;

            case 3:
            multiply();
            break;

            case 4:
            divide();
            break;
            
            case 5:
                  printf("You chose exit!");
                   break;
            
            default:
            printf("Please Choose a Valid Option");
            break;

        }
    }while(choice!=5);
}