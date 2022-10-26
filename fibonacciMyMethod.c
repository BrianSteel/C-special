#include <stdio.h>
#include <cs50.h>

int fibo(int x);



int main()
{
    int n;
    int num;
    int result;

    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {for (num=0; num<n; num++)
       { result = fibo(num);
        printf("Number %d (in fibonacci series) is %d\n", num+1, result);
       }
    }
    return 0;

}


int fibo(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(x - 1) + fibo(x - 2));
    }
}

