// Program 26: Program to read positive numbers from user till user enters 0 and display for each number whether it is even or odd

#include <stdio.h>

int main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}