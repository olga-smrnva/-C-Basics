#include <stdio.h>
#include <stdlib.h>

void rotate(int array [], int length, int n);

int main()
{
   int array1[5] = {1,2,3,4,5};
   rotate(array1, 5, 1);

   return 0;
}

void rotate(int array[], int length, int n)
{


    for(int i = 0; i < n; i++)
        {
        int j, first;
        first = array[0];

            for(j = 0; j < length-1; j++)
            {
            array[j] = array[j+1];
            }

        array[j] = first;
        }

    for(int i = 0; i<length; i++)
    {
        printf("%d", array[i]);
    }

}




