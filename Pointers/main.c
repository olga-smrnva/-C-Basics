#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
    int num = 150;
    int *pnum = NULL;

    pnum = &num;

    printf("Num address is: %p\n", &num);
    printf("Address of pnum: %p\n", &pnum);
    printf("The value of the pnum: %p\n", pnum);
    printf("Value of what pnum is point to: %d\n", *pnum);

    return 0;
}
