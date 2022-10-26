#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#define MAX 1000
int main(void)
{
  int tile;
  int tiles[MAX];
  string number= get_string();
   if(strlen(number)>1000)
   {
     printf("too many inputs, replay!\n");
     return 3;
   }
   if (strlen(number)==2)
    {
      tile = atoi(number);
      printf("%i\n",tile);
    }
  for (int i=0, n= strlen(number); i<n; i++)
  {
    //if (i>=1000)
    //{
      //printf("Too many inputs, replay!");
      //return 3;
    //}


    tiles[i] = putchar(number[i])-'0';
    printf("\n");



  }
  for (int j=0, n=strlen(number); j<n ; j++ )
  {
    tile=tiles[j];
    printf("%i\n", tile);
  }



}