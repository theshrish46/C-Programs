#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Declaring the variables.
    int n1, n2,temp;

    // Accepting the values of the two numbers.
    printf("Enter any two numbers of your choice\n");
    scanf("%d%d", &n1, &n2);

    // Logic to swap both the Numbers.
    temp = n1;
    n1 = n2;
    n2 = temp;

    // Printing the values after swapping.
    printf("Numbers after swapping N1 - %d  and  N2 - %d\n", n1, n2);

    return 0;
}
