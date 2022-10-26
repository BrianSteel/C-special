#include <cs50.h>
#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
   // scanf("%d", &n);
    n= get_int();

    printf("Fibonacci Series: ");

    //iterating from i =1 to i = n which is the input from user and inside printing out t1
    for (i = 1; i <= n; ++i)
    {
        //print out t1
        printf("%d + ", t1);

         //defining next term
        nextTerm = t1 + t2;

        //storing value of t2 in t1
        t1 = t2;

        //storing value of nextTerm in t2.
        t2 = nextTerm;
    }
     printf("\n");
    return 0;
}