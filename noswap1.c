#include <cs50.h>
#include <stdio.h>

void swap(int *a, int *b );

int main (void)
{
    int x =1; int y = 2;

    printf ("x is %i\n", x);
    printf("y is %i\n", y);

    printf( "swapping...\n");
    
    //get me the address of x and get me the address of y and pass it to swap instead of int a and b
    // now swap function can go there.
    swap(&x,&y);
    printf("swapped!!!!\n");

    printf ("x is %i\n", x);
    printf("y is %i\n", y);

}
//the work of star here - give me the address of int a and b.
void swap(int *a, int *b)
{  
    //*a means go to a. star means go to
    int temp= *a;
    
    //go to the location of a and go to the loction of and put that of b in a.
    *a= *b;
    *b =temp;
}