#include <stdio.h>
typedef struct Person{
char name[40];
int age;
char city[40];
} Person;
 
int main(){
Person p[3];
strcpy(p[0].name,"Alice");
p[0].age = 16;
strcpy(p[0].city,"Netherlands");
strcpy(p[1].name,"Cameo");
p[1].age = 14;
strcpy(p[1].city,"America");
strcpy(p[2].name,"Morocco");
p[2].age = 22;
strcpy(p[2].city,"Nigeria");
printf("The name,age and city of the first person is %s,%d,%s\n",p[0].name,p[0].age,p[0].city);
printf("The name,age and city of the second person is %s,%d,%s\n",p[1].name,p[1].age,p[1].city);
printf("The name,age and city of the third person is %s,%d,%s\n",p[2].name,p[2].age,p[2].city);
return 0;
}