/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <sys/types.h>

#include <unistd.h>


int main() {
	for (int i = 0; i < 5; ++i) {
		fork();
	}
	
	sleep(5);
	
	return 0;
}
