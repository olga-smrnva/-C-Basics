 #include <stdio.h>

void merge(int array1[], int array2[], int array3[], int length1, int length2)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < length1 && j < length2)
    {
        if (array1[i] < array2[j])
        {
            array3[k] = array1[i];
            i++;
        }

        else
        {
            array3[k] = array2[j];
            j++;
        }
        k++;
    }

    while (i < length1)
    {
        array3[k] = array1[i];
        k++;
        i++;
    }

    while (j < length2)
    {
        array3[k] = array2[j];
        k++;
        j++;
    }

}


int main ()
{
     int length1, length2;

    printf("\nEnter the size of Array 1 : ");
    scanf("%d",&length1);

    printf("\nEnter the size of Array 2 : ");
    scanf("%d",&length2);

    int array1[length1],array2[length2];
    int array3[length1 + length2];
    int i;

    printf("\nInput the Array 1 elements : ");
       for(i = 0; i < length1; i++)
       {
        scanf("%d",&array1[i]);
       }

    printf("\nInput the Array 2 elements : ");
       for(i = 0;i<length2;i++)
       {
        scanf("%d",&array2[i]);
       }


    merge(array1,array2,array3,length1,length2);
    printf("\nThe Merged Sorted Array : ");
        for(i = 0; i < length1 + length2; i++)
        {
         printf("%d ",array3[i]);
        }

    printf("\n");

return 0;
}

