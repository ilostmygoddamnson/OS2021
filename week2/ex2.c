/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void stringreverse(char string[]){
    int l = strlen(string);
    for (int i=0;i<l/2;i++){
        char tmp = string[i];
        string[i]=string[l-1-i];
        string[l-i-1] = tmp;
    }
}


int main()
{
    char string[1024];
    fgets(string,1024,stdin);
    stringreverse(string);
    printf("%s",string);
    return 0;
    
}
