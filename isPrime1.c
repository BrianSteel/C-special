#include <stdio.h>
#include <cs50.h>
#include <math.h>

bool isPrime(int num);
bool isPrimee(int num);

int main(void){
    int all_nums,isprime;
    printf("Enter a number \n");
    scanf("%d", &all_nums);
    isprime= isPrimee(all_nums);
    if (isprime==true){
        printf("%d is prime\n", all_nums);
    }else
        {printf("%d is not a prime number\n", all_nums);}
    return 0;
}

bool isPrime(int num){
    int i;
    bool isprime= true;

    for (i=2; i<=num/2; i++){
        if ((num % i) == 0 || num<=1){
            isprime=false;
            break;
        }
    } return isprime;
}

bool isPrimee(int num){
    int i;
    bool isprime=true;
    for(i=3; i<sqrt(num); i+=2){
        if((num %i)==0||num<=1){
            isprime=false;
            break;
        }
    } return isprime;
}


