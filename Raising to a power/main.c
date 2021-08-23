#include <stdlib.h>
#include <stdio.h>

void swap (int *a, int *b);

int main ()
{
    int x = 7, y = 3;

    printf("First is %d, second is %d \n", x,y);

    swap(&x, &y);

    printf("After the interchange first is %d, second is %d \n", x,y);

    return 0;
}



void swap(int* ptr_x, int* ptr_y)
{
    int *temp;

    temp = ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = *temp;
}

