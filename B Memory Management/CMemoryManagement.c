#include <stdio.h>
#include <stdlib.h>

int MAX_N = 100000000;
int* heapPointer[100000001];
int* stackPointer[100000001];

void mallocNTimes(int n);

int main(void)  
{
    mallocNTimes(0);

    printf("stack start: %p\n", stackPointer[0]);
    printf("stack stop : %p\n", stackPointer[MAX_N-1]);
    printf("heap stop  : %p\n", heapPointer[MAX_N-1]);
    printf("heap start : %p\n", heapPointer[0]);
    printf("global variables 3: %p\n", stackPointer);
    printf("global variables 2: %p\n", heapPointer);
    printf("global variables 1: %p\n", &MAX_N);

    return 0;
}

void mallocNTimes(int i)
{
    int* temp;

    if (i == MAX_N)
    {
        return;
    }

    stackPointer[i] = &i;
    heapPointer[i] = (int *)malloc(sizeof(int));

    printf("stack now: %p\n", &i);
    printf("heap now : %p\n", heapPointer[i]);

    return mallocNTimes(i+1);
}