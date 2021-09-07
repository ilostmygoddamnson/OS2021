/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
	int* pc;
	int c;

	c = 22;

	printf("Address of c:%d\n", &c);
	printf("Value of c:%d\n\n", c);

	pc = &c;

	printf("Address of pointer pc:%d\n", pc);
	printf("Content of pointer pc:%d\n\n", *pc);

	c = 11;

	printf("Address of pointer pc:%d\n", pc);
	printf("Content of pointer pc:%d\n\n", *pc);

	*pc = 2;

	printf("Address of c:%d\n", &c);
	printf("Value of c:%d\n\n", c);

	return 0;
}
