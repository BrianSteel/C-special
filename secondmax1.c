#include <cs50.h>
#include <stdio.h>

int main(void){


    int a[50];
    int b[50];
    int position=0;

    int size;
    printf("Enter the size of array [max 50] :");
    scanf("%d",&size);
    if (size>50 || size<1){
        printf("Provide the right size...\n");
        return 0;
    }
    for (int i=0;i<size;i++){
        printf("Enter the Element no %d : ",i+1);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < size; i++) {
      b[i] = a[i];
    }

    printf("\n");

    int x, t;
    for (int i=0; i<size-1; i++){
        t= a[i+1]-a[i];
        if (t<0){
            a[i+1]=a[i];
        }
        x= a[i+1];
    }
    printf("Max Value is %d\n", x);

    for (int i = 0; i < size; i++){
      printf("b[%d] = %d\n", i, b[i]);
    }


    for(int i=0; i<size; i++){
        if (b[i]==x){
            position=i;
           //printf("position is %d\n", position);
            break;
        }
    }

    if (position==size-1){
        for ( int j=position; j<size; j++){
            b[j]=-10000;


            for ( int i=0; i<size-1; i++){
                t= b[i+1]-b[i];
                if (t<0){
                    b[i+1]=b[i];
                }
                x= b[i+1];
            }
        }


        printf("Second Max Value is %d\n", x);

        return 0;


    }

    for (int i = position; i <size; i++){
            b[i] = b[i + 1];
        }
    for (int i = 0; i < size; i++){
      printf("b[%d] = %d\n", i, b[i]);
    }
    for (int i=0; i<size-1; i++){
        t= b[i+1]-b[i];
        if (t<0){
            b[i+1]=b[i];
        }
        x= b[i+1];
    }
    printf("Second Max Value is %d\n", x);

    return 0;
}