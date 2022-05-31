#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    // Declaring the variables.
    int number, rem, rev=0, sum;


    // Accepting the number to verify whether it si Palindrome or not.
    printf("Enter any number of your choice to verify whether it forms a Palindrome or not\n");
    scanf("%d", &sum);
    number = sum;

    while (sum>0)
    {
        rem = sum % 10;
        rev = rev * 10 + rem;
        sum = sum / 10;
    }

    if (number == rev)
    {
        printf("Entered number forms a Palindrome\n");
    }

    else{
        printf("Entered number doesn't forms a Palindrome\n");
    }
    
    
    
    return 0;
}
