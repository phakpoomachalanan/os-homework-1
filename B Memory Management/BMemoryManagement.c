#include <stdio.h>
#include <stdlib.h>

long long int MAX_N = 1000;
long long int* heapPointer[100000001];
long long int* stackPointer[100000001];

void mallocNTimes(long long int n);

int main(void)  
{
    printf("MAX_N = %lld\n", MAX_N);

    mallocNTimes(0);

    printf("\nstack start: %p\n", stackPointer[0]);
    printf("stack stop : %p\n", stackPointer[MAX_N-1]);
    printf("heap stop  : %p\n", heapPointer[MAX_N-1]);
    printf("heap start : %p\n", heapPointer[0]);
    printf("global variables 3: %p\n", stackPointer);
    printf("global variables 2: %p\n", heapPointer);
    printf("global variables 1: %p\n", &MAX_N);

    return 0;
}

void mallocNTimes(long long int i)
{
    int* temp;

    if (i == MAX_N)
    {
        return;
    }

    stackPointer[i] = &i;
    heapPointer[i] = (long long int *)malloc(sizeof(int));

    printf("stack now: %p\n", &i);
    printf("heap now : %p\n", heapPointer[i]);

    return mallocNTimes(i+1);
}