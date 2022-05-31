#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int a[50][50], trace=0, i, j, m;
    printf("Enter the order of the matrix you want : \t");
    scanf("%d", &m);
    printf("Enter the elements of matrix\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    
    printf("Matrix entered by you is : \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // trace of the matrix
    for ( i = 0; i < m; i++)
        {
            trace = trace + a[i][i];
        }

    printf("Trace of the entered matrix is %d\n", trace);
    
    return 0;
}
