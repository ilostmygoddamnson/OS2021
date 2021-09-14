/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <sys/types.h>

#include <unistd.h>


int main(int argc, char *argv[]) {
	int n;
	
	sscanf (argv[1], "%d", &n);
	
	pid_t parent = fork();
	
	if (parent){
	    printf("Wass up from parent [%d - %d]\n", getpid(), n );
	    return 0;
	}
	else{
	    printf("Wass up from child [%d - %d]\n", getpid(), n );
	}
	
	return 0;
}
