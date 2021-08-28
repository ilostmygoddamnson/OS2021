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

void rsot(int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}

void rectangle(int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            printf("*");
        }
        printf("\n");
    }
}

void lst (int size){
    for (int i=1;i<=size;i++){
        if (i<=size/2){
            for(int j=0;j<i;j++){
                printf("*");
            }
        }
        else {
            for(int j=0;j<size-i+1;j++){
                printf("*");
            }
        }
        printf("\n");
    }
}

int main()
{
    int size, type;
    char str[256];
    
    printf ("1 ~ piramid\n2 ~ right side of triangle\n3 ~ rectangle\n4 ~ left side triangle\n" );
    
    scanf ("%s",str);
    sscanf (str, "%d", &type);
    
    printf ("enter size\n");
    scanf("%s",str);
    sscanf(str, "%d",&size);
    
    switch(type){
        case 1: 
            piramid(size);
            break;
        case 2:
            rsot(size);
            break;
        case 3:
            rectangle(size);
            break;
        case 4:
            lst(size);
            break;
    }
    return 0;
}
