#include <stdio.h>
#include<stdlib.h>// It doesn't naccessary to include this header file
void main()
{
printf("[----- [TaeYoungKim] [2021041005] -----]\n");
int **x;//Declaring pointer of pointer named x
printf("sizeof(x) = %lu\n", sizeof(x));//Printing size of pointer named x #4(in 32bits processor)
printf("sizeof(*x) = %lu\n", sizeof(*x));//Printing size of pointer #4(in 32bits processor)
printf("sizeof(**x) = %lu\n", sizeof(**x));//Printing size of pointer #4(in 32bits processor)
}//sizeof(*x),sizeof(**x) don't refer to memory which is pointed by x. They just return sizeof(int), sizeof(int *)
