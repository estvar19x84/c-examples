#include<stdio.h>
#include<stdlib.h>

int main(){
    // Variable to stack
    int a;
    // pointer to heap
    int *p;
    //Allocate heap to pointer
    p = (int*)malloc(sizeof(int));
    *p = 10;
    printf("%d",*p);
    free(p);    
}