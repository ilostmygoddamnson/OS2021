/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void piramid(int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size-i-1;j++){
            printf(" ");
        }
        for (int j=1;j<=2*i+1;j++){
            printf("*");
        }
    printf("\n");
    }
}



int main()
{
    int size;
    char str[256];
    
    printf ("enter size\n");
    scanf("%s",str);
    sscanf(str, "%d",&size);
     
    piramid(size);
            
    return 0;
}
