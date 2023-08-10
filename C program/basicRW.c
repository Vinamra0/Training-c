#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* f;

    // char* name="Vinamra";
    // int id =101;
    char* name;
    printf("name:");
    scanf("%s",&name);

    f=fopen("sample.txt","w");

    
        fputs(name,f);
    
    fclose(f);
}