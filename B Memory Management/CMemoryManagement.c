#include <stdio.h>


int MAX_N = 100000;
int* heapPointer[100001];
int* stackPointer[100001];


void mallocNTimes(int n);


int main(void)
{

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