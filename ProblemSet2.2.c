#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int m;
    float conversion;

    printf("Enter a new MIDI note number: ");
    scanf("%d", &m);
   // printf("You have typed in note %d\n", m);

    conversion = (((float)m-69)/12);
    //printf("conversion is %f\n", conversion);
    conversion = pow(2, conversion)*440;
    printf("MIDI note %d in Hz is %f\n", m, conversion);
return 0;
}