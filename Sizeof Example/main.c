#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Variables of char occupy %u bytes\n", sizeof(char));
    printf("Variables of short occupy %u bytes\n", sizeof(short));
    printf("Variables of int occupy %u bytes\n", sizeof(int));
    printf("Variables of long occupy %u bytes\n", sizeof(long));
    printf("Variables of long long occupy %u bytes\n", sizeof(long long));
    printf("Variables of float occupy %u bytes\n", sizeof(float));
    printf("Variables of double occupy %u bytes\n", sizeof(double));
    printf("Variables of long double occupy %u bytes\n", sizeof(long double));
    return 0;
}
