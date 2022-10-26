#include <cs50.h>
#include <stdio.h>

int sigma(int n);

int main (void)
{
    int n;
   do
   {
        printf("positive integer sir...");
        n= get_int();

   }
        while(n<1);

        int answer= sigma(n);
        printf("%i\n", answer);

}

int sigma(int n)
{
    if (n<=0)
    {
        return 0;
    }else{
   return (n + sigma(n-1));
}
}