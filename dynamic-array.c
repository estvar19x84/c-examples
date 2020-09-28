#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define INITIAL_CAPACITY 0

int array_size(int *array){
    int size = 0;

}

void bubble_sort(int *array){
    for (int i = 0 ; i < 1; i++){

    }
}


void push(int *arr,int value,int *capacity){
    realloc(arr,((*capacity * sizeof(int)) + sizeof(int)));
    *capacity = *capacity + 1;
}

int main(){
    int capacity = INITIAL_CAPACITY;
    int elements = 0;
    int *array = (int*)malloc(capacity*sizeof(int));

    printf("Enter number of elements: ");    
    //reads and stores input
    scanf("%d", &elements);

    time_t t;
    srand((unsigned) time(&t));

    
    for (int i = 0; i < elements; i++){
        push(array,rand(),&capacity);
    }
    
    for (int i = 0; i < capacity; i++){
        printf("%d\n",array[i]);
    }
    
    printf("Size of char: %ld byte\n", capacity * sizeof(int));
    free(array);
    return 0;
}