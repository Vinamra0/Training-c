#include<stdio.h>
#include<stdlib.h>

struct test{
    int id;
    char *name;
    char *address;
};

int main(){
    FILE* f;
    struct test *details[3];
    for(int i=0;i<1;i++){
        printf("enter id:\t \n");
        scanf("%d",&details[i]->id);
        printf("enter name:\t \n");
        scanf("%s",&details[i]->name);
        printf("enter address:\t \n");
        scanf("%s",&details[i]->address);
    }

   
    f=fopen("sample.txt","w");
    if(f==NULL){
    printf("File is empty");
    }else{
        fwrite(details,sizeof(struct test),1,f);
    }
    fclose(f);

    f=fopen("sample.txt","r");

    if(f==NULL){
        printf("Empty");
    }else{
        while(fgets(details,sizeof(struct test),1,f)){
           for(int i=0;i<1;i++){
             printf("%d %s %s",details[i]->id,details[i]->name,details[i]->address);
           }
        }
    }
    fclose(f);
    return 0;
}