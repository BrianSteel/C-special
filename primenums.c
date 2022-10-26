#include <stdio.h>
#include <math.h>
#include <cs50.h>

void isPrimeNums(int num1, int num2);
void swap(int *a, int *b);
int main(void){
    int num1, num2;
    printf("Provide the number boundaries:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    isPrimeNums(num1, num2);
    return 0;
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void isPrimeNums(int num1, int num2){
    int i;
    if(num1>num2){
        swap(&num1, &num2);
    }
    while(num1<num2){
        bool isprimenum=true;
        for(i=2; i<=sqrt(num2); i++){
            if((num1 %i)==0){
                isprimenum=false;
                break;
            }
        } if (isprimenum==true){
            printf("The prime number from %d to %d is %d \n", num1, num2, num1);
        }num1++;
    }

}