#include <stdio.h>
int sum();
int main(int argc, char const *argv[])
{
    
    int a, b, summation;
    int fact=2, x, i;
    printf("Enter the number to find its factorial $");
    scanf("%d", &x);
    for ( i = 0; i < x; i++)
    {
        fact = fact * x;
    }
    printf("Factorial of given number is %d\n", fact);
    printf("Entr any two numbers A and B \n");
    scanf("%d%d", &a, &b);
    summation = sum();
    printf("%d\n", summation);
    return 0;

}
    int sum(int a, int b){
        int result;
        result = a + b;
        return result;
    }
