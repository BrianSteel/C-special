#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"
//capitalise form denotes the constants that are gona be used in coding, here students is capitalised and constant valued with number 3.
#define STUDENTS 3

int main(void)
{   // the first student is the type of the array of students(2nd word of the line) having a constant value of STUDENTS -3.
//the first word students is in the header file <struct.h> which was made before thi whole piece of coding.
// in simple it means hey computer give an array of size 3 inside of which are 3 students.iterates from i=o
    student students[STUDENTS];

    //iterates from i=0 upto 3 but not including 3, for 3 inputs of students name and dorm which can sorted in the next for loop.
    for (int i=0; i<STUDENTS; i++)
    {
        printf ("name: ");
        //user input for name and dot meaning take the input and goto the section of name in students and place it there.
        students[i].name=get_string();

        printf("dorm: ");
        //user input for dorm name and dot means to go to the sectio of dorm and place the input there.
        students[i].dorm=get_string();

    }// data type- file in all capital
    //in lower case file its saying hey computer give a variable called file of  type file *
    //that is give me a variable that will give a pointer to a file, the address of a file
    //fopen opens up the file students.csv in write mode
    //so i want to write and save a file
    //csv - comma seperated values. this are text files which have texts seperated by comma(,)
    FILE *file= fopen("students.csv", "w");
    //for example the file cud not be formed or empty due to no storage space etcetra.
    if (file != NULL)
    {


    //now we got the input it will print out each in the manner inputed and then print it out 3 times.
    for (int i =0; i<STUDENTS; i++)

        //file print in such format and allows you to print to a file not to a screen or terminal window.
        fprintf(file, "%s,%s\n", students[i].name, students[i].dorm);

    }
    //this is required in this type of FILE format where there is a fopen and fclose. fclose literarily closes the streaming of a file.
    //the stream means the opening of the file.
    fclose(file);
}