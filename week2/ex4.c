/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void swap(int *x,int *y){
    int tmp = *x;
    *x=*y;
    *y=tmp;
}

int main()
{
    int x,y;
    printf("Enter first integer number \n");
    scanf("%d",&x);
    printf("Enter second integer number \n");
    scanf("%d",&y);
    swap(&x,&y);
    printf("After swap: %d %d",x,y);
    
    return 0;
}
