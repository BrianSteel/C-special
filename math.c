#include <cs50.h>
#include <stdio.h>
int main(void)
{
    printf(" bool is %lu\n", sizeof(bool));
    printf(" char is %lu\n", sizeof(char));
    printf(" int is %lu\n", sizeof(int));
    printf(" long long is %lu\n", sizeof(long long));
    printf(" float is %lu\n", sizeof(float));
    printf(" string is %lu\n", sizeof(string));
    printf(" double is %lu\n", sizeof(double));

    int n=1;
    for (int i=4; i<=100; i++)
    {
        printf("n is %i\n", n);
        n*=2;
    }

    printf("%.55f\n" , 1.0/(float)10);
}
