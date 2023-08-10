#include<stdio.h>

void main(){
    int n,temp;
    int matrix1[100][100];
    int matrix2[100][100];
    printf("please enter the size of matrix: ");
    scanf("%d",&n);
    printf("Please fill Matrix1: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix1[i][j]);
        }      
    }

    printf("please fill Matrix2: \n ");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix2[i][j]);
        }
       
    }

    printf("The Addition of the given matrix is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp= matrix1[i][j]+matrix2[i][j];
            printf("%d",temp);
        }
        printf("\n");
    }
     
      printf("The Substraction of the given matrix is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp= matrix1[i][j]-matrix2[i][j];
            printf("%d",temp);
        }
        printf("\n");
    }

     printf("The Multiplication of the given matrix is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp= matrix1[i][j]*matrix2[i][j];
            printf("%d",temp);
        }
        printf("\n");
    }


    
}