#include <stdio.h>
struct student1 {//Struct student1 is declared
char lastName;//Char variable Member of struct student1 is declared
int studentId;//Int variable Member of struct student1 is declared
char grade;//Char variable Member of struct student1 is declared
};
typedef struct {//Struct student2 is declared
char lastName;//Char variable Member of struct student2 is declared
int studentId;//Int variable Member of struct student2 is declared
char grade;//Char variable Member of struct student2 is declared
} student2;//Struct student2 is declared
int main() {
printf("[----- [TaeYoungKim] [2021041005] -----]\n");
struct student1 st1 = {'A', 100, 'A'};//Assigning {'A', 100, 'A'} to struct student1 st1.
printf("st1.lastName = %c\n", st1.lastName);//Printing st1.lastName #'A'
printf("st1.studentId = %d\n", st1.studentId);//Printing st1.studentId #100
printf("st1.grade = %c\n", st1.grade);//Printing st1.grade #'A'
student2 st2 = {'B', 200, 'B'};//Assigning {'B', 200, 'B'} to struct student2 st2.As studen2 is declared by typedef, we can use student2 instead of struct student2
printf("\nst2.lastName = %c\n", st2.lastName);//Printing st2.lastName #'B'
printf("st2.studentId = %d\n", st2.studentId);//Printing st2.studentId #200
printf("st2.grade = %c\n", st2.grade);//Printing st2.grade #'B'
student2 st3;//Declaring struct student2 st3
st3 = st2;//Assigning values of all members of st2 to st3
printf("\nst3.lastName = %c\n", st3.lastName);//Printing st3.lastName #'B' as same as st2.lastName
printf("st3.studentId = %d\n", st3.studentId);//Printing st3.studentId #200 as same as st2.studentId
printf("st3.grade = %c\n", st3.grade);//Printing st3.grade #'B' as same as st2.grade
/* equality test */
if(st3.lastName == st2.lastName && st3.studentId==st2.studentId&&st3.grade==st2.grade)//Checking all members of st3 are equal to all members of st2
printf("equal\n");//All members of st3 are equal to all members of st2 so it will print equal
else
printf("not equal\n");
return 0;//Return of main function
}
