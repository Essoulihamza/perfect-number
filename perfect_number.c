#include <stdio.h>
int main(void)
{
    int num, sum = 0;
    printf("enter a number: ");
    scanf("%i", &num);
    for ( int i = 1; i < num; i++ )
    {
        if( num % i == 0 )
        {
            sum += i;
        }
    }
    ( sum == num ) ? printf("this is a perfect number\n") : printf("this is not a perfect number\n");
    
}