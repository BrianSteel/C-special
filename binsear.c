#include <stdio.h>

void swap(int* a, int* b);
void bubbleSort(int a[], int nth);
void Search(int a[], int nth);

int main(){
   int i, nth, a[101];

   printf("Enter number of the elements\n");
   scanf("%d",&nth);
   if (nth>100){
      printf("Provide number less than equal to 100.\n");
      return 0;
   }
   printf("Enter %d integers\n", nth);

   for (i = 0; i < nth; i++){
      scanf("%d",&a[i]);
   }
   //bubbleSort(a, nth);
   Search(a, nth);
   return 0;
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


void bubbleSort(int a[], int nth){
   int j=0;
   while(j<nth){
      for(int i=0;i<nth-1;i++){
         if(a[i]>a[i+1]){
            swap(&a[i],&a[i+1]);
         }
      }
      j++;
   }
   printf("\n");
}



void Search(int a[], int nth){
   bubbleSort(a, nth);
   int search, first, mid, last;
   printf("\nEnter the value\n");
   scanf("%d", &search);

   first = 0;
   last = nth - 1;
   mid = (first+last)/2;

   while (first <= last) {
      if (a[mid] < search){
         first = mid + 1;}
      else if (a[mid] == search) {
         printf("%d It is in position %d.\n", search, mid+1);
         break;
      }
      else{
         last = mid - 1;
      }
      mid = (first + last)/2;
   }
   if (first > last){
      printf("Not found! %d is not there, sorry!\n", search);
   }
}


