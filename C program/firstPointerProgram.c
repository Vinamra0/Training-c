#include<stdio.h>

int main(){
    int sample=1;
    int *ptr=&sample;
    printf("%d ",*ptr);
    printf("%d ",sample);
    printf("%d",ptr);
    
    return 0;
}