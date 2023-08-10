#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5};
    int *ptr = a;

    for(int ctr=4;ctr>=0;ctr--){
        printf("%d\n",*(ptr+ctr));
    }
    return 0;
}