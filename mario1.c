// solving mario game crude version

#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;
    do
    {
        printf("Height from 0 to 23:\t");
        height = get_int();

      for (int j=0; j<height; j++)
        {

          for (int i=height-1; i>j; i--)
          {
              printf(" ");
          }

            for (int i= 0; i<j+2; i++)


             {
                    printf("#");
             }

            printf("\n");
        }
    }
    while (height<0 || height>23);



}