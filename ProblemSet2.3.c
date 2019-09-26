#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int x, y, temp;
    printf("input x:");
    scanf("%d",&x);
    printf("input y:");
    scanf("%d",&y);
    printf("BEFORE SWAP: x is %d and y is %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("AFTER SWAP: x is %d and y is %d\n", x, y);
return 0;
}