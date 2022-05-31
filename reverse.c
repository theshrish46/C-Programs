#include <stdio.h>
int main(int argc, char const *argv[])
{
    int length=0, j, i;
    char string[50], reverse[50];

    printf("Enter any String which you want to reverse\n");
    scanf("%s", &string);
    printf("String entered by you is %s\n", &string);
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    j=0;
    for (i=length-1; i>0; i--)
    {
        reverse[j++] = string[i];
    }

    printf("String entered by you is %s\n", &reverse);
    

    return 0;
}






#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int i, j, k;
    char str[25], rvc[25];

    printf("String : \n");
    scanf("%s", &str);

    for ( i = 0; str[i] != '\0'; i++)
    {
        k=i-1;
    }

    for ( j = 0; j <= i-1; j++)
    {
        rvc[j] = str[k];
        k--;
    }

    printf("Reverse : %s\n", &rvc);
    
    
    return 0;
}
