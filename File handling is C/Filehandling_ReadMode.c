#include <stdio.h>
#include <string.h>
int main(){
    FILE* file;
    file=fopen("ak.txt","r");
    char name[9],surname[500];
    if(file==NULL){
        printf("Error");
    }
    fread(name,1,8,file);
    printf("%s",name);
    if(strcmp(name,"Abhishek")==0){
        printf("Welcome %s",name);
    }
    else{
        printf("Error opening file");
    }
    fclose(file);
    return 0;
}