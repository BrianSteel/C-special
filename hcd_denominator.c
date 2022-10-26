#include <stdio.h>
#include <ctype.h>
int main()
{
int n1, n2, i, Hcd;
printf("Two integer numbers: \n");
scanf("%d\n", &n1);
scanf("%d", &n2);

if (!isdigit(n1))
{
    printf("Integer only!!\n");
    return -1;
}

if (!isdigit(n2))
{
    printf("Integer only!!\n");
    return -1;
}
for (i=1; i<=n1 && i <=n2; i++)
{
    if(n1%i==0 && n2%i==0)
    {
        Hcd= i;
    }
}

printf("Highest common denominator of %i and %i is\n%i\n", n1, n2, Hcd );
return 0;
}