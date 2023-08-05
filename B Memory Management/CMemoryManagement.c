#include <stdio.h>
#include <stdlib.h>

int MAX_N = 100000;
int* heapPointer[100001];
int* stackPointer[100001];

void mallocNTimes(int n);

int main(void)  
{
    mallocNTimes(MAX_N);

    printf("heap start: %x\n", heapPointer[0]);
    printf("heap stop: %x\n\n", heapPointer[MAX_N]);
    printf("stack start: %x\n", stackPointer[0]);
    printf("stack stop: %x\n\n", stackPointer[MAX_N]);
    printf("global variables 1: %x\n", MAX_N);
    printf("global variables 2: %x\n", heapPointer);
    printf("global variables 3: %x\n", stackPointer);

    return 0;
}

void mallocNTimes(int i)
{
    int temp;

    if (i == MAX_N)
    {
        return;
    }

    stackPointer[i] = &temp;
    heapPointer[i] = (int *)malloc(sizeof(int));

    return mallocNTimes(i+1);
}