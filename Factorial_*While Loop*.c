//Program to find factorial of a number

#include<stdio.h>

int main()
{
    printf("Program to find factorial of a number\n\n");
    
    // 5! = 5 * 4 * 3 * 2 * 1
    
    int i = 1, fact = 1, n1;
    
    printf("Enter the number to check factorial : ");
    scanf("%d", &n1);
    
    while(i <= n1)
    {
        fact = fact * i;
        i++;
    }
    
    printf("Factorial of a number %d is : %d", n1, fact);
    
    return 0;
}
