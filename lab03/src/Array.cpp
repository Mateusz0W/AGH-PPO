#include "Array.h"

int *InitArray(int arraySize){
    int *array=new int[arraySize]{1};
    return array;
}
void CreateSequence(int *array,int arraySize){
    for(int i=1;i<arraySize;i++)
        array[i]=array[i-1]*2;
}
int *ChangeArraySize(int *array, int arraySize, int newArraySize){
    int *new_array=new int[newArraySize];
    for(int i=0;i<arraySize;i++)
        new_array[i]=array[i];
    delete [] array;
    return new_array;
}

void DeleteArray(int *array){
    delete [] array;
}