#include<stdio.h>


void towerOfHanoi(int disk_num, char start, char last, char mid);
void totalSteps(int disknum);
int main (void){
    int diskNum;
    printf("Provide the number of disks: ");
    scanf("%d",&diskNum);
    if(diskNum<0){
        printf("Inappropiate disk Number has been provided. \nPLease try again. Use positive values only!!!\n");
        return 0;}
    else if(diskNum==0){
        printf("No Disk Number provided!\n");
        return 0;
    }
    else if(diskNum>17){
        printf("Too high number. Will take more than 25 seconds. \nSorry, I got work to do!\n");
        return 0;
    }
    towerOfHanoi(diskNum, 'S', 'M','L');
    totalSteps(diskNum);
}

void towerOfHanoi(int disk_num, char start, char mid, char last){


    if (disk_num==1){

        printf("Move disk 1 tower %c -> tower %c\n", start, last);}

    else{

        towerOfHanoi(disk_num-1, start, last, mid );    //towerOfHanoi(disk_num-1, start,last, mid);//towerOfHanoi(disk_num-1, last, start, mid);//towerOfHanoi(disk_num-1, mid, last, start);
        printf("Move disk %d tower %c -> tower %c\n", disk_num, start, last);    //towerOfHanoi(disk_num-1, start,last, mid);//towerOfHanoi(disk_num-1, last, start, mid);//towerOfHanoi(disk_num-1, mid, last, start);
        towerOfHanoi(disk_num-1, mid, start, last );
    }

}


void totalSteps(int disknum){
    int N2=0;
    int totalstep;
    int count = 0;
    while (count < disknum){
        totalstep = 1 + 2*N2;
        N2 = totalstep;
        count++;
    }
    printf("\nThe total number of steps it took is: %d\n", totalstep);
}

