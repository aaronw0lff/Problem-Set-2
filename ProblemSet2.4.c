#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int bpm;
    float milli;
    printf("Enter BPM:");
    scanf("%d",&bpm);

    milli = (1000*(1/((float)bpm/60)));
    printf("%d BPM has %f millisecond intervals.\n", bpm, milli);
return 0;
}