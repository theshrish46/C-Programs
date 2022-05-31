#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int a[10], i, j, k, d[10], n;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

    printf("Enter the elements of the matrix\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    
    
    return 0;
}
