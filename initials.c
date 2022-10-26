#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
int main(void)
{

    char *name= get_string("name: ");
    for (int j=0, n=strlen(name); j<n; j++)
    {
       while(ispunct(name[j]) || isdigit(name[j]))
       {
            printf("Only alphabets and spaces!\n");
            return 1;
       }
    }

    if (name[0]!=' ')
    {
        printf("%c", toupper(name[0]));
    }
    for (int i = 0, n=strlen(name); i < n; i++)
    {
        if (name[i] == ' ' && name[i+1]!=' ' && name[i+1]!='\0')
        {
            // print next character as an uppercase char
            printf("%c", toupper(name[i + 1]));
        }
    }

    //print new line
    printf("\n");

}
