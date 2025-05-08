#include <stdio.h>
#include <string.h>
int main(){
    char firstname[40];
    char lastname[40];
    printf("Enter your first name: ");
    scanf("%s",firstname);
    printf("Enter your last name: ");
    scanf("%s",lastname);
    strcat(firstname,lastname);
    printf("Your full name is %s\n",firstname);
    return 0;
}