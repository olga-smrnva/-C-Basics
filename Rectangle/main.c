#include <stdio.h>
#include <stdlib.h>

int main()
{
    double height = 34.5;
    double width = 56.8;
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;


    printf("Perimeter is: %f\n", perimeter);
    printf("Area is: %f\n", area);

    return 0;
}
