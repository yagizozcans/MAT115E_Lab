#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    printf("Please enter a number: ");
    scanf("%d",&a);
    
    float sum;
    sum = (((float)a-154.0) / 2.5) + (523.48 / (float)a);
    
    printf("summary is: %f",sum);
    return 0;
}
