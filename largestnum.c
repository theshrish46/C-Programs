#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Declaration of the Variables.
    int n1, n2, n3;

    // Accepting the three numbers from user.
    printf("Enter any three numbers of your choice\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    // Printing the  numbers entered by user to verify.
    printf("Numbers entered by you are %d\t %d\t %d\n", n1, n2, n3);

    // Using if-else statements solving the problem.

    if (n1>n2)
    {
        if (n1>n3)
        {
            printf("Largest Number is %d\n", n1);
        }

        else{
            printf("Largest Number is %d\n", n3);
            
        }
        
    }

    else if (n2>n3)
    {
            printf("Largest Number is %d\n", n2);
        
    }

    else{
            printf("Largest Number is %d\n", n3);

    }
    
    
    return 0;
}
