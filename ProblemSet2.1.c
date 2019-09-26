#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

char char1; 
    int testbit;
    char diff   = 'a' - 'A';   /*  0x20 for ASCII */
  
    printf("Enter a character: ");
    scanf("%c", &char1);
   // printf("you typed: %c\n", char1);
    
    testbit = char1 & diff; //bitwise AND
    //printf("testbit is now %d\n", testbit);
    printf ("The letter: %c is lowercase: %d\n", char1, (testbit && 1));
    printf ("The letter: %c is uppercase: %d\n", char1, !(testbit && 1));
    return 0;
}