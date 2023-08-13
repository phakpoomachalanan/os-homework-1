#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(void)
{
    int sumThread[2];
    int times, i;
    int* input;

    scanf("%d\n", &times);
    input = (int*)malloc(sizeof(int) * times);
    
    for (i=0; i<times; i++)
    {
        scanf("%d", input[i]);
    }
    for (i=0; i<times; i++)
    {
        printf("%d", input[i]);
    }


    return 0;
}