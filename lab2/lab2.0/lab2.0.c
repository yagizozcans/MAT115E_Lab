#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char a,b;
    printf("Please enter first char: ");
    a = getchar();
    getchar();
    
    printf("Please enter second char: ");
    b = getchar();
    getchar();
    
    float harmonic;
    
    harmonic = 2.0 / ((1/(float)a) + (1/(float)b));
    printf("Harmonic average is: %.4f",harmonic);
}
