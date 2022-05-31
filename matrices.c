#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Declaring the variables.
    int a[10][10], b[10][10], c[10][10], d[10][10];
    int row, col;

    // Setting the number of rows.
    printf("Enter the number of the rows of matrices\n");
    scanf("%d", &row);

    // Setting the number of columns.
    printf("Enter the number of the rows of matrices\n");
    scanf("%d", &col);

    // Accepting the elements for the Matrix A.
    printf("Enter the elements of the matrix A\n");
    printf("Enter the elements of the matrix b\n");
    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
           
        }
        
    }

    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }

    //Adding and Subtracting matrix A and B.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            d[i][j] = a[i][j] - b[i][j];

        }
        
    }

    for ( int i = 0; i < row; i++) 
    { 
        for ( int j = 0; j < col; j++) 
        { 
            printf("%d\n",  c[i][j]); 
        } 
        printf("\n"); 
    } 
 
    for ( int i = 0; i < row; i++) 
    { 
        for ( int j = 0; j < col; j++) 
        { 
            printf("%d\n",  d[i][j]); 
        } 
        printf("\n"); 
         
    }

    return 0;
} 

    
    