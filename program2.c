#include <stdio.h>
#include <stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        ptr[i]=i+1;
    }
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    ptr=(int*)realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++){
        ptr[i]=i+1;
    }
    for(int i=0;i<10;i++){
        printf("%d\n",ptr[i]);
    }
free(ptr);
    ptr=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        ptr[i]=i+1;
    }
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
free(ptr);
ptr=NULL;
    return 0;
}