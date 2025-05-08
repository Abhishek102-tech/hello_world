#include <stdio.h>
#include <string.h>
int main(){
    FILE* file;
    file=fopen("hello.txt","w");
    char name[9]="Abhishek";
    char occupation[8]="Student";
    char message[50]="Hello, I am Abhishek. Nice to metcha!";
    fprintf(file,"Name: %s\n",name);
    fprintf(file,"Occupation: %s\n",occupation);
    fputs(message,file);
    printf("Succesfully printed");
    return 0;
}