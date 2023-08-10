#include<stdio.h>
#include<string.h>
void main(){
    char s[20]='Vinamra';
    int n=strlen(s);
    int noOfSubstring = n*(n+1)/2;

    printf("The number of substrings in the given string is: %d",noOfSubstring);
}