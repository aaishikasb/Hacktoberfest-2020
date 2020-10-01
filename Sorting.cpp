

"""Bubble Sorting"""


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,temp,i; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
    	scanf("%d",&a[a_i]);
    }
    int numberOfSwaps = 0;
    for (i = 0; i < n; i++) {
         // Track number of elements swapped during a single array traversal
    
    for (int j = 0; j < n - 1; j++)
       {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

                  
            numberOfSwaps++;
        }
    }
    
    }
    printf("Array is sorted in %d swaps.\n",numberOfSwaps);
    for(i=0;i<n;i++)
    {  if(i==0)
        printf("First Element: %d\n",a[i]);
       if(i==n-1)
        printf("Last Element: %d",a[i]); 
    }

    return 0;
}
