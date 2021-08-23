#include <stdio.h>
#include <stdlib.h>

int arraySum (int array[], const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    for (ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr;

    return sum;
}

int main()
{
    int arraySum (int array[], const int n);
    int values [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("The sum is %i\n\n\n", arraySum (values, 10));


    int Largest (int array[], const int n);

    printf("The largest number in given array is %d\n\n\n", Largest(values, 10));


    int Smallest (int array[], const int n);

    printf("The smallest number in given array is %d\n\n\n", Smallest (values, 10));

    return 0;
}



int Largest (int array[], const int n)
{
    int i;
    int max = array[0];

    for (i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}

int Smallest (int array[], const int n)
{
    int i;
    int min = array[0];

    for (i = 1; i < n; i++)
        if (array[i] < min)
            min = array[i];

    return min;
}















