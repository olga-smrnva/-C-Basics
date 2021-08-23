#include <stdio.h>
#include <stdlib.h>

void reverseArray (int array[], int start, int end)
{
    int x;

    while (start < end)
    {
        x = array[start];
        array[start] = array[end];
        array[end] = x;
        start ++;
        end --;
    }
}

int main ()
{
    int array[] = {1,2,3,4,5};
    int i;
    int n = sizeof (array) / sizeof (array[0]);

    printf("The given array is: \n");

    for (i = 0; i < n; i++)
        printf (" %d", array[i]);

    printf (" \n");

    reverseArray (array, 0, n - 1);

    printf("The reversed array is: \n");

    for (i = 0; i<n; i++)
    printf (" %d", array[i]);

return 0;
}
