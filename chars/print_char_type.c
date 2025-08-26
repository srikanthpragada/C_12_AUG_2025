// Take a char and display the type of the char
// Date : 26-AUG-2025

#include<stdio.h>

void main( )
{
 char ch;

    printf("Enter char:");
    ch = getchar( );

    if(ch>='A' && ch<='Z')
        printf("Uppercase!");
    else
        if(ch>='a' && ch<='z')
            printf("Lowercase!");
        else
            if(ch>='0' && ch<='9')
                printf("Digit!");
            else
                printf("Something else!");
}
