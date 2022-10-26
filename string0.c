#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("Any word sir...?");
    //asks for input from the user.
    string x = get_string();
    //makes sure get_string returns string
    if (x!= NULL)
    {
        //iterates over rge character in x one at a time
        for (int i=0, n=strlen(x); i<n; i++)
    {//prints the ith character in x.
        printf("%c\n", x[i]);
    }


    }
}

