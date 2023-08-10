#include<stdio.h>

void main(){
    char s[10]="Vinamra";
    int freq[256]={0};
    // printf("Enter a string: \n");
    // gets(s);
    // printf("The Value you entered is:");
    // puts(s);
    for(int i=0; s[i]!='\0' ;i++){
        freq[s[i]]++;
    }

    printf("The frequency of each character is: \n");

    for(int j=0;j<256;j++){
        if(freq[j]>0){
            printf("%c : %d \n",j,freq[j]);
        }
    }
}