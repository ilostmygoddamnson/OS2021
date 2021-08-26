/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){

    int int123 = INT_MAX;
    float float123 = FLT_MAX;
    double double123 = DBL_MAX;
    
    printf("Int:\n Size - %ld\n Value - %d\n", sizeof(int123),int123);
    printf("Float:\n Size - %ld\n Value - %f\n", sizeof(float123),float123);
    printf("Double:\n Size - %ld\n Value - %f\n", sizeof(double123),double123);

    return 0;
}