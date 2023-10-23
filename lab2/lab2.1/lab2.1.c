#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char x1,y1,x2,y2;
    
    printf("Please enter first point: ");
    scanf("(%c, %c)",&x1,&y1);
    getchar();
    
    printf("Please enter second point: ");
    scanf("(%c, %c)",&x2,&y2);
    
    int mdistance;
    
    mdistance = (abs)((int)x1-(int)x2) + (abs)((int)y1-(int)y2);
    
    printf("Manhattan distance is: %d",mdistance);
}
