#include <stdio.h>
struct student {//Struct student is declared
char lastName[13]; /* 13 bytes *///Char array member of struct student is declared
int studentId; /* 4 bytes *///Int member of struct student is declared
short grade; /* 2 bytes *///Short member of struct student is declared
};
int main()//Main function is declared
{
printf("[----- [TaeYoungKim] [2021041005] -----]\n");
struct student pst;//Declaring struct student pst
printf("size of student = %ld\n", sizeof(struct student));//Printing size of struct student. 13(lastName)+3(padding)+4(studentId)+2(grade)+2(padding)=24 in 32bits processor. Padding into 4-byte blocks.
printf("size of int = %ld\n", sizeof(int));//Printing size of int #4
printf("size of short = %ld\n", sizeof(short));//Printing size of short #2
return 0;//Return of main function
}