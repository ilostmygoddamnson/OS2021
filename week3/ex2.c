/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void bubble_sort(int arr[], const int n) {
	int sorted = 0;
	int tmp;
	do {
		sorted = 1;
		
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				sorted = 0;
				tmp = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
			}
		}
	} while(!sorted);
}

int main()
{
    const int n = 15;
    int arr[n];
    printf("Enter 15 numbers of array");
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    bubble_sort(arr, n);
    
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
