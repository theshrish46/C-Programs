#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    
    int v=0, c=0, d=0, ws=0, sc=0;
    char string[100];
    
    printf("Enter any two String of your choice.\n");
    gets(string);
    printf("String entered by you is %s\n", string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            v++;
        }
        
        else if ((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        {
            c++;
        }
        else if (string[i]>'0' && string[i]<'9')
        {
            d++;
        }
        else if (string[i] == ' ')
        {
            ws++;
        }
        else
        {
            sc++;
        } 
        
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
    printf("Digits = %d\n", d);
    printf("Special Characters = %d\n", sc);
    printf("White Spaces = %d\n", ws);
    
    
    return 0;
}
