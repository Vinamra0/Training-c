#include<stdio.h>

int main(){
    int sample=15;
    int *ptr = &sample;
    int prod=3;
    int *p = &prod;

    printf("%d ", (*ptr / *p));
}