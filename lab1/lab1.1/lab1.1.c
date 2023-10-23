#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int miles,averagemile,gallon,parkingfee,toll, sum;
    
    printf("Please type your total miles that driven per day: ");
    scanf("%d",&miles);
    
    printf("Please type cost per gallon of gasoline: ");
    scanf("%d",&gallon);
    
    printf("Please type your average mile per gallon: ");
    scanf("%d",&averagemile);
        
    printf("Please type your parking fees per day: ");
    scanf("%d",&parkingfee);
    
    printf("Please type your tolls fees per day: ");
    scanf("%d",&toll);
    
    sum = toll + parkingfee + ((miles / averagemile) * gallon);
    printf("Your total daily cost is: %d",sum);
    
    return 0;
}
