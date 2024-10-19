#include <stdio.h>
int sum(int a){
    printf("%d%d%d",a,++a,a++);
};
void main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    sum(num);
}