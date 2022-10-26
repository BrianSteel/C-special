#include <cs50.h>
#include <stdio.h>

string name(string name); //this makes sure that the defined function is considered beofre the print of the function or else there come an error.

int main(void)
{
 printf("name: "); // prints out the name: for input and thus better user experience.
 string x= get_string(); // helps to get user input from keyboard
 printf("hello, %s\n", name(x));
}

string name(string x)
{
  return x;
}