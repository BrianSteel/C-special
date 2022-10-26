#include <stdio.h>

int main(void){

    int position=0;
    int a[11]={45,6,4,34,2,7,8,10,56,1000};
    int x, t;
    for (int i=0; i<10; i++){
        t= a[i+1]-a[i];
        if (t<0){
            a[i+1]=a[i];
        }
        x= a[i+1];
    }
    printf("Max Value is %d\n", x);

    int b[11]={45,6,4,34,2,7,8,10,56,1000};

    for(int i=0; i<10; i++){
        if (b[i]==x){
            position=i;
           //printf("position is %d\n", position);
            break;
        }
    }

    for (int i = position; i < 10; i++){
            b[i] = b[i + 1];
        }
    for (int i=0; i<10; i++){
        t= b[i+1]-b[i];
        if (t<0){
            b[i+1]=b[i];
        }
        x= b[i+1];
    }
    printf("Second Max Value is %d\n", x);

    return 0;
}



